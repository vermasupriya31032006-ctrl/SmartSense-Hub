# ESP32 LED Control

## Overview

This project demonstrates basic digital output control using an ESP32 microcontroller. An LED is connected to one of the ESP32's GPIO pins and programmed to blink at regular intervals. The project serves as a foundation for learning GPIO programming, circuit connections, and embedded systems development.

## Objectives

- Learn the fundamentals of ESP32 programming.
- Understand GPIO pin configuration.
- Control an external LED using digital output.
- Simulate the circuit using Wokwi.

## Components Used

- ESP32 Development Board
- LED
- 220Ω Resistor
- Wokwi Simulator

## Circuit Description

- GPIO 2 → LED (Anode)
- LED (Cathode) → 220Ω Resistor → GND

## Features

- LED blinks every second.
- Demonstrates digital HIGH and LOW signals.
- Beginner-friendly embedded systems example.
- Fully simulated using Wokwi.

## Technologies Used

- C++
- Arduino Framework
- ESP32
- Wokwi Simulator

## Project Structure

```
ESP32-LED-Control/
│
├── code/
│   └── sketch.ino
│
├── images/
│   └── led_blink_simulation.png
│
└── README.md
```

## Future Enhancements

- Control LED using a push button.
- Add PWM-based LED brightness control.
- Enable remote LED control using Wi-Fi.
- Integrate with sensors for automation.

## Author

**Supriya Verma**
