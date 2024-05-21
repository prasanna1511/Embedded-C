# Embedded Systems Experiments

This repository contains a series of experiments conducted on embedded systems, utilizing various components such as Real-Time Operating Systems (RTOS), sensors, relays and batteries. These experiments were developed and tested using the Arduino IDE and programmed in Embedded C.

## Contents

- **RTOS Experiments**: Implementation and testing of Real-Time Operating Systems on microcontrollers.
- **Sensor Interfacing**: Experiments involving the integration and use of different types of sensors.
- **Embedded C Code**: All code is written in Embedded C and is designed to be run on Arduino-compatible hardware.

## Getting Started

### Prerequisites

- Arduino IDE: Ensure you have the latest version of the Arduino IDE installed on your computer. You can download it from the [Arduino website](https://www.arduino.cc/en/software).
- Arduino Board: A compatible Arduino board (e.g., Arduino Uno, Mega, or Nano) to upload and run the experiments.
- Required Libraries: Some experiments may require additional libraries which can be installed via the Arduino Library Manager.

### Installation

1. **Clone the Repository**: Clone this repository to your local machine using the following command:
    ```bash
    git clone https://github.com/yourusername/embedded-systems-experiments.git
    ```

2. **Open in Arduino IDE**: Navigate to the cloned repository and open the `.ino` files using the Arduino IDE.

3. **Upload to Arduino**: Connect your Arduino board to your computer and upload the desired experiment code to the board.

## Experiments

### RTOS Experiments

- **Task Scheduling**: Simple task scheduling using FreeRTOS.
- **Inter-task Communication**: Examples demonstrating message passing and synchronization between tasks.

### Sensor Interfacing

- **Temperature Sensor**: Reading data from a DHT11/DHT22 temperature and humidity sensor.
- **Light Sensor**: Measuring ambient light using an LDR and processing the data.

### Battery Management

- **Voltage Monitoring**: Monitoring battery voltage using an ADC.
- **Battery Life Estimation**: Estimating battery life based on current draw measurements.

