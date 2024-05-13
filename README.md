# ESP8266 WiFi Temperature and Humidity Monitor

## Overview
To build a real-time temperature and humidity monitoring system using an ESP8266 board, DHT11 sensor. The data is sent to ThingSpeak app for visualization and monitor remotely.

## Hardware Requirements
- **ESP8266 Development Board**: NodeMCU
- **DHT11 Sensor**: For measuring temperature and humidity
- **USB Power Supply**
- **Wi-Fi Network**
- **Battery**

## Setup Process
1. **Install Arduino IDE**: Download and install the Arduino IDE.

2. **Install ESP8266 Board Support**: Open Arduino IDE, go to `File` > `Preferences`, and paste the following URL into the "Additional Board Manager URLs" field: `http://arduino.esp8266.com/stable/package_esp8266com_index.json`. Then, go to `Tools` > `Board` > `Boards Manager`, search for "ESP8266", and install the package.

3. **Install Libraries**: Install the required libraries for ESP8266 and DHT11 sensor. Go to `Sketch` > `Include Library` > `Manage Libraries...`, search for "ESP8266WiFi" and "DHT sensor library" and install them.

4. **Connect Hardware**: Wire the DHT11 sensor's data pin to pin D5 on the ESP8266 board.

5. **Configure Code**: Open the provided Arduino sketch in the Arduino IDE. Update the following variables in the code:
   - `ssid`: Your Wi-Fi network name.
   - `password`: Your Wi-Fi network password.
   - `myChannelNumber` and `myWriteAPIKey`: Your ThingSpeak channel details.

6. **Upload Code**: Select the correct board and port under `Tools` menu in Arduino IDE, upload the code to the ESP8266 board.

7. **Monitor Data**: Once uploaded, open the Serial Monitor in Arduino IDE to view temperature and humidity data being sent by the ESP8266. Additionally, you can access your ThingSpeak app to visualize the data in real-time.

## Application and Uses
- **Home Automation**: Monitor temperature and humidity levels in your home environment.
- **Indoor Gardening**: growing conditions for plants.
- **Weather Monitoring**: Collect data for local weather conditions.
- **Research and Education**: Learn about IoT (Internet of Things) and sensor data collection.
- **Remote Monitoring**: Access data remotely using ThingSpeak and make informed decisions.

## Troubleshooting
- If encountering connection issues, double-check Wi-Fi credentials and ensure the ESP8266 is compatible with your network.
- Verify correct wiring of the DHT11 sensor to the ESP8266 board.
- Check for any errors or warnings during code compilation and upload.
