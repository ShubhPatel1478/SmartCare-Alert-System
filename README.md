# SmartCare Alert System

An embedded elderly-care monitoring solution developed using the MYOSA platform. The system combines motion sensing, gesture recognition, temperature monitoring, and alert generation to improve safety and assistance for elderly individuals.

---

## Features

* Fall Detection using accelerometer and tilt data
* Fire Detection using onboard temperature monitoring
* Gesture-Based Assistance (UP, DOWN, LEFT, RIGHT)
* Audio Alerts using buzzer
* Visual Alerts using LEDs
* Real-Time Sensor Monitoring

---

## Hardware Used

* MYOSA Development Board
* MPU6050 Accelerometer & Gyroscope
* APDS9960 Gesture and Ambient Light Sensor
* LEDs
* Buzzer

---

## Software Stack

* C++
* Arduino IDE
* Embedded Systems
* Sensor Integration
* I2C Communication

---

## Working

The SmartCare Alert System continuously monitors motion, orientation, and environmental conditions to assist elderly individuals in emergency situations.

### Fall Detection

A fall event is detected using:

* Accelerometer data
* Device tilt information

When a potential fall is detected, the system activates both visual and audio alerts.

### Fire Detection

The onboard temperature sensor continuously monitors ambient conditions. If the temperature exceeds a predefined threshold, an emergency alert is triggered.

### Gesture-Based Assistance

The APDS9960 sensor enables gesture recognition for quick assistance requests:

| Gesture | Action         |
| ------- | -------------- |
| UP      | Turn Light ON  |
| DOWN    | Turn Light OFF |
| RIGHT   | Help Request 1 |
| LEFT    | Help Request 2 |

### Alert Mechanism

Alerts are generated using:

* Buzzer notifications
* LED indicators

---

## Demonstration

A live demonstration of the SmartCare Alert System can be viewed here:

🔗 https://www.linkedin.com/posts/activity-7274640889086390273-0sdc

---

## My Contributions

* Implemented fall detection logic using motion and tilt data.
* Integrated gesture-based assistance controls.
* Developed fire detection and alert mechanisms.
* Performed sensor integration and system testing on the MYOSA platform.
* Validated system behavior under multiple emergency scenarios.

---

## Achievement

🏆 Shortlisted among the Top 5 projects in IEEE MYOSA 2025.

🏆 Presented at APSCON 2025 hosted at IIT Hyderabad.

---

## Team

Developed as part of a team consisting of:

* Shubh Patel
* Rudra Bhatt
* Hari Sharma
* Jay Limbasiya

under faculty mentorship.

---

## Repository Contents

* `SmartCare.ino` – Main source code
* `Demo_Video.md` – Demonstration video link
* `README.md` – Project documentation

---

## Future Improvements

* Mobile application integration
* Cloud-based monitoring and notifications
* SMS and emergency contact alerts
* Health analytics dashboard
* GPS-enabled emergency response support
