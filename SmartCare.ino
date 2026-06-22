#include <Wire.h>
#include <cstring>
#include <Actuator.h>
#include <AccelAndGyro.h>
#include <LightProximityAndGesture.h>

/* Hardware Objects */
Actuator gpioExpander;
AccelAndGyro AMG;
LightProximityAndGesture Lpg;

/* Reserved Variables */
uint16_t *rgbProportion;
char *gesture;

/* Pin Definitions */
const int BUZZER_PIN = 12;
const int LED_PIN = 16;

/* Thresholds */
const int FALL_TILT_THRESHOLD = 30;
const int FIRE_TEMP_THRESHOLD = 55;
const int ACCEL_THRESHOLD = 2000;

/* Utility Function */
void triggerAlert(int durationMs)
{
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);

    delay(durationMs);

    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);
}

void setup()
{
    Serial.begin(115200);

    Wire.begin();
    Wire.setClock(100000);

    pinMode(BUZZER_PIN, OUTPUT);
    pinMode(LED_PIN, OUTPUT);

    /* Initialize MPU6050 */
    while (!AMG.begin())
    {
        Serial.println("Accelerometer and gyroscope sensor is disconnected...");
        delay(500);
    }

    Serial.println("Accelerometer and gyroscope sensor is connected");

    /* Initialize APDS9960 */
    while (!Lpg.begin())
    {
        Serial.println("Proximity, Ambient Light, RGB & Gesture sensor is disconnected...");
        delay(500);
    }

    Serial.println("Proximity, Ambient Light, RGB & Gesture sensor is connected...");
    Serial.println("APDS9960 initialization completed");

    if (Lpg.enableAmbientLightSensor(DISABLE))
        Serial.println("Light sensor is now running");
    else
        Serial.println("Ambient light sensor initialization failed");

    if (Lpg.enableGestureSensor(DISABLE))
        Serial.println("Gesture sensor is now running");
    else
        Serial.println("Gesture sensor initialization failed");

    delay(50);
}

void loop()
{
    /* Motion & Temperature Monitoring */
    if (AMG.ping())
    {
        int ax = AMG.getAccelX();
        int ay = AMG.getAccelY();
        int az = AMG.getAccelZ();

        int gx = AMG.getGyroX();
        int gy = AMG.getGyroY();
        int gz = AMG.getGyroZ();

        int tempc = AMG.getTempC();
        int tempf = AMG.getTempF();

        int tiltx = AMG.getTiltX();
        int tilty = AMG.getTiltY();
        int tiltz = AMG.getTiltZ();

        float accelMagnitude =
            sqrt((float)ax * ax +
                 (float)ay * ay +
                 (float)az * az);

        /* Fall Detection */
        if (accelMagnitude > ACCEL_THRESHOLD &&
            (abs(tiltx) > FALL_TILT_THRESHOLD ||
             abs(tilty) > FALL_TILT_THRESHOLD ||
             abs(tiltz) > FALL_TILT_THRESHOLD))
        {
            Serial.println("Fall detected");
            triggerAlert(1000);
        }

        /* Fire Detection */
        if (tempc > FIRE_TEMP_THRESHOLD)
        {
            Serial.println("Fire detected");
            triggerAlert(1000);
        }
    }

    /* Ambient Light Detection */
    if (Lpg.ping())
    {
        int ambientLight = Lpg.getAmbientLight();

        if (ambientLight < 10)
        {
            Serial.println("Low light detected");
            digitalWrite(LED_PIN, HIGH);
        }
    }

    /* Gesture Recognition */
    if (Lpg.ping())
    {
        gesture = Lpg.getGesture();

        if (gesture != NULL)
        {
            if (strcmp(gesture, "UP") == 0)
            {
                Serial.println("Light needs to be on");
                digitalWrite(LED_PIN, HIGH);
            }
            else if (strcmp(gesture, "DOWN") == 0)
            {
                Serial.println("Light needs to be off");
                digitalWrite(LED_PIN, LOW);
            }
            else if (strcmp(gesture, "RIGHT") == 0)
            {
                Serial.println("Help 1 detected");
                triggerAlert(1000);
            }
            else if (strcmp(gesture, "LEFT") == 0)
            {
                Serial.println("Help 2 detected");
                triggerAlert(1000);
            }
        }
    }

    delay(100);
}