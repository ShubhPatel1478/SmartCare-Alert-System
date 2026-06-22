# SmartCare Alert System

An embedded elderly-care monitoring solution developed using the MYOSA platform. The system combines motion sensing, gesture recognition, temperature monitoring, and alert generation to improve safety and assistance for elderly individuals.

## Features

- Fall Detection using accelerometer and tilt data
- Fire Detection using onboard temperature monitoring
- Gesture-Based Assistance (UP, DOWN, LEFT, RIGHT)
- Audio Alerts using buzzer
- Visual Alerts using LEDs
- Real-Time Sensor Monitoring

## Hardware Used

- MYOSA Development Board
- MPU6050 Accelerometer & Gyroscope
- APDS9960 Gesture Sensor
- LEDs
- Buzzer

## Software Stack

- C++
- Arduino IDE
- Embedded Systems
- Sensor Integration

## Working

The system continuously monitors motion, orientation, and environmental conditions.

### Fall Detection
A fall event is detected when:
- Acceleration magnitude exceeds a threshold
- Device orientation changes significantly

### Fire Detection
An alert is triggered when the measured temperature exceeds the predefined safety threshold.

### Gesture Control
The APDS9960 sensor enables:
- UP → Turn light ON
- DOWN → Turn light OFF
- LEFT → Help Request 2
- RIGHT → Help Request 1

## My Contributions

- Implemented fall detection logic using motion and tilt data.
- Integrated gesture-based assistance controls.
- Developed fire detection and alert mechanisms.
- Tested and validated sensor interactions on the MYOSA platform.

## Achievement

🏆 Shortlisted among the Top 5 projects at IEEE MYOSA 2025.

🏆 Presented at APSCON 2025 hosted at IIT Hyderabad.

## Team

Developed as part of a team project under faculty mentorship.

## Repository Contents

- SmartCare.ino
- Project Documentation
- Demonstration Material

