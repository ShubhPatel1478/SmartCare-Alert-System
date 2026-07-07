# 🩺 SmartCare Alert System

An IoT-based elderly health monitoring and emergency assistance system developed using the **MYOSA embedded platform**. The system leverages multiple sensors to detect falls, monitor environmental conditions, recognize hand gestures, and generate real-time alerts, enhancing the safety and well-being of elderly individuals.

> 🏆 **Shortlisted among the Top 5 projects at IEEE MYOSA 2025**  
> 🎤 **Presented at APSCON 2025, IIT Hyderabad**

---

# 📌 Overview

SmartCare Alert System is designed to provide immediate assistance during emergency situations. By integrating motion sensing, gesture recognition, and temperature monitoring, the system can automatically detect abnormal events and notify caregivers through visual and audio alerts.

The project demonstrates practical applications of **embedded systems**, **sensor fusion**, and **real-time event detection**.

---

# ✨ Features

- 🚶 Fall Detection using accelerometer and orientation data
- 🔥 Fire Detection through continuous temperature monitoring
- ✋ Gesture-Based Assistance using APDS9960
- 🚨 Real-Time Audio Alerts using buzzer
- 💡 Visual Alerts using LEDs
- 📡 Continuous sensor monitoring and event detection

---

# 🛠 Hardware Components

- MYOSA Development Board
- MPU6050 Accelerometer & Gyroscope
- APDS9960 Gesture & Ambient Light Sensor
- BMP180 Temperature Sensor
- OLED Display
- LEDs
- Buzzer

---

# 💻 Software Stack

- C++
- Arduino IDE
- Embedded Systems Programming
- Sensor Integration
- I2C Communication

---

# ⚙️ System Architecture

The SmartCare Alert System continuously acquires data from multiple sensors, processes the information in real time, and triggers alerts whenever abnormal conditions are detected.

```
Sensors
   │
   ▼
Sensor Processing
   │
   ▼
Event Detection
(Fall / Fire / Gesture)
   │
   ▼
Alert Generation
(Buzzer + LEDs)
```

---

# 🔍 Core Functionalities

## 🚶 Fall Detection

The system analyzes:

- Accelerometer readings
- Device orientation (tilt)

If a potential fall is detected, both audio and visual alerts are activated immediately.

---

## 🔥 Fire Detection

The onboard temperature sensor continuously monitors ambient temperature.

When the temperature exceeds a predefined threshold, the system generates an emergency alert.

---

## ✋ Gesture-Based Assistance

The APDS9960 sensor recognizes user gestures for quick assistance requests.

| Gesture | Action |
|----------|--------|
| ⬆️ Up | Turn Light ON |
| ⬇️ Down | Turn Light OFF |
| ➡️ Right | Help Request 1 |
| ⬅️ Left | Help Request 2 |

---

## 🚨 Alert Mechanism

Emergency notifications are generated using:

- Buzzer
- LED Indicators

These alerts provide immediate local feedback during emergency situations.

---

# 📂 Repository Structure

```
SmartCare-Alert-System
│
├── SmartCare.ino
├── Demo_Video.md
├── README.md
└── assets/
```

---

# 👨‍💻 My Contributions

- Designed and implemented fall detection logic using motion and orientation data.
- Integrated APDS9960 gesture recognition for assistance requests.
- Developed fire detection and emergency alert mechanisms.
- Performed sensor integration using I2C communication.
- Tested and validated system behavior under multiple emergency scenarios.

---

# 🎥 Demonstration

Watch the project demonstration on LinkedIn:

🔗 https://www.linkedin.com/posts/activity-7274640889086390273-0sdc

---

# 🏆 Achievements

- Shortlisted among the **Top 5 projects** in **IEEE MYOSA 2025**.
- Presented at **APSCON 2025**, IIT Hyderabad.

---

# 👥 Team

Developed by

- Shubh Patel
- Rudra Bhatt
- Hari Sharma
- Jay Limbasiya

under faculty mentorship.

---

# 🚀 Future Enhancements

- Mobile application integration
- Cloud-based monitoring platform
- SMS & emergency contact notifications
- Health analytics dashboard
- GPS-enabled emergency assistance
- Remote caregiver monitoring

---

# 📖 Key Learning Outcomes

Through this project, we explored:

- Embedded Systems Programming
- Sensor Fusion
- Real-Time Event Detection
- IoT System Design
- I2C Communication
- Hardware-Software Integration
- Emergency Alert Systems

---

# 📄 License

This project was developed as part of the **IEEE MYOSA 2025** embedded systems competition for academic and educational purposes.
