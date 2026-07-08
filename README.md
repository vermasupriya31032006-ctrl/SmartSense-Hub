# 🌿SMART SENSE HUB
### Smart Environmental Monitoring & Automation System using ESP32

## 📌 Project Overview

SMART SENSE HUB  is an IoT-based environmental monitoring system developed using ESP32 and a DHT22 sensor. The project was built incrementally by completing individual IoT tasks and finally integrating them into one complete solution.

The system monitors environmental conditions such as temperature and humidity, displays the collected data, and performs automatic actions based on predefined conditions.

---

## 🎯 Objectives

- Monitor temperature and humidity in real time.
- Simulate sensor data using Wokwi.
- Visualize sensor readings.
- Implement automation based on environmental conditions.
- Integrate all functionalities into one complete IoT project.

---

# 📅 Project Development

## ✅ IoT Fundamentals

Learned the fundamentals of the Internet of Things including:

- What is IoT
- IoT Architecture
- ESP32 Microcontroller
- Sensors and Actuators
- Communication Protocols
- Real-world IoT Applications

**Outcome**
- Understood the basic concepts required for developing an IoT system.

---

## ✅ Sensor Data Simulation

Simulated a DHT22 Temperature and Humidity Sensor using Wokwi.

Implemented:

- ESP32
- DHT22 Sensor
- Serial Monitor Output

**Output**

- Temperature (°C)
- Humidity (%)

---

## ✅ IoT Dashboard

Created a basic dashboard to visualize environmental data.

Dashboard displays:

- Temperature
- Humidity
- Device Status

**Outcome**

Users can monitor environmental conditions in an organized manner.

---

## ✅ Automation Logic

Added decision-making capability to the system.

Automation Rules:

- If Temperature > 30°C
  - Turn LED ON
- Else
  - Turn LED OFF

Additional Rule:

- If Humidity > 80%
  - Display High Humidity Alert

**Outcome**

The project became an automated monitoring system instead of only displaying sensor values.

---

# ✅  Final Integrated Project

All previous tasks were integrated into a single IoT solution.

### Final Workflow

```
DHT22 Sensor
      │
      ▼
ESP32 Reads Sensor Data
      │
      ▼
Displays Temperature & Humidity
      │
      ▼
Automation Logic
      │
      ▼
LED Control & Alerts
```

---

## 🛠 Hardware Used

- ESP32
- DHT22 Sensor
- LED
- 220Ω Resistor

---

## 💻 Software Used

- Arduino IDE
- Wokwi Simulator
- GitHub

---

## ✨ Features

- Real-time Temperature Monitoring
- Real-time Humidity Monitoring
- Sensor Data Simulation
- Environmental Monitoring
- Automatic LED Control
- High Humidity Alerts
- Expandable for Cloud Dashboard

---


## 🚀 Future Enhancements

- MQTT Integration
- Blynk Dashboard
- ThingSpeak Cloud
- Mobile Notifications
- Data Logging
- Weather Forecast Integration

---

## 📖 Conclusion

SMART SENSE HUB demonstrates the implementation of an IoT-based environmental monitoring and automation system. The project combines sensing, monitoring, visualization, and automation into one integrated solution, providing a strong foundation for future IoT applications.
