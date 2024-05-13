# Ultrasonic Dustbin Fill Detector

## Overview

This project implements an Ultrasonic Dustbin Fill Detector using an Arduino board and an ultrasonic sensor. The system detects whether a dustbin is filled beyond a certain threshold and indicates it using an LED.

## Hardware Requirements

- Arduino board
- Ultrasonic sensor
- LED
- Jumper wires
- USB cable

(Optional)
- 9V battery or any suitable power source


## Setup Process

1. **Assemble Hardware**:
   - Connect the ultrasonic sensor to the Arduino board:
     - VCC pin of the sensor to 5V pin on Arduino
     - GND pin of the sensor to GND pin on Arduino
     - TRIG pin of the sensor to digital pin 11 on Arduino
     - ECHO pin of the sensor to digital pin 12 on Arduino
   - Connect an LED:
     - Anode (longer leg) to digital pin 13 and Cathode (shorter leg) to GND on Arduino

2. **Install Arduino IDE**:
   - Download and install the Arduino IDE 

3. **Upload Sketch**:
   - Copy the provided Arduino sketch (`ultrasonic_dustbin_fill_detector.ino`) to your Arduino IDE.
   - Connect to your computer via USB.
   - Select the correct board and port from the Tools menu.
   - Upload the sketch to the Arduino board.

4. **Optional - Connect WiFi Module** (for remote monitoring):
   - If you have a WiFi module, connect it to the Arduino according to its specifications.
   - Modify the sketch to include WiFi functionalities for remote monitoring which can leave notifications.

5. **Power On**:
   - Power on the Arduino board either via USB connection or using a battery.

## Application and Uses

- **Dustbin Monitoring**: The system continuously measures the distance from the ultrasonic sensor to the bottom of the dustbin. When the distance falls below a predefined threshold, it indicates that the dustbin is filled.
- **LED Indication**: An LED connected to the Arduino lights up when the dustbin is filled, providing a visual indication.
- **Remote Monitoring** (Optional): With the addition of a WiFi module, the system can send notifications or status updates to a remote server or smartphone application, allowing users to monitor the dustbin's fill level from anywhere.

## Step-by-Step Explanation

1. The Arduino triggers the ultrasonic sensor to emit a short pulse.
2. The sensor then waits for the pulse to be reflected back by an object (in this case, the bottom of the dustbin).
3. The Arduino measures the duration of the pulse using the `pulseIn()` function.
4. Using the duration, the Arduino calculates the distance between the sensor and the object (dustbin bottom) using the speed of sound.
5. If the calculated distance falls below the predefined threshold, it indicates that the dustbin is filled, and the LED turns on.
6. If the distance is above the threshold, the LED remains off, indicating that the dustbin is not filled.

