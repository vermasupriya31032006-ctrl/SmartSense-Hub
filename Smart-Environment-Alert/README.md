
# Smart Environment Alert

## Overview

Smart Environment Alert is an IoT-based monitoring system that measures environmental temperature and humidity using a DHT22 sensor connected to an ESP32. The system continuously monitors the surroundings and automatically activates an LED whenever the temperature exceeds a predefined threshold.

## Objectives

- Monitor environmental conditions in real time.
- Detect high-temperature situations.
- Provide a visual alert using an LED.
- Demonstrate basic IoT automation concepts.

## Features

- Real-time temperature monitoring
- Real-time humidity monitoring
- Automatic LED alert
- Serial Monitor output
- ESP32 simulation using Wokwi

## Components Used

- ESP32 Development Board
- DHT22 Temperature & Humidity Sensor
- LED
- 220Ω Resistor
- Connecting Wires

## Working Principle

The DHT22 sensor continuously measures temperature and humidity values. The ESP32 processes the sensor readings and compares the temperature with a predefined threshold (30°C). If the temperature exceeds the threshold, the LED turns ON to indicate a high-temperature alert. Otherwise, the LED remains OFF.

## Technologies Used

- C++
- Arduino IDE
- ESP32
- Wokwi Simulator

## Folder Structure

```
Smart-Environment-Alert/
│
├── code/
│   └── sketch.ino
│
├── images/
│   ├── circuit.png
│   └── output.png
│
└── README.md
```

## Future Enhancements

- OLED Display
- Buzzer Alert
- Cloud Data Logging
- Mobile Notifications
- IoT Dashboard

## Author

Supriya Verma
