**Arduino Relay Control via Serial Communication**

**Introduction:**
Controlling a relay using an Arduino board via serial communication. This project shows users to remotely toggle the state of a relay connected to an Arduino board using simple serial commands.

**Hardware Requirements:**
1. Arduino Board (e.g., Arduino Uno)
2. Relay Module(1channel, 4 channel, 8 channel as per requirement)
3. Battery


**Setup:**
1. Connect the relay module to the Arduino board. Typically, this involves connecting the relay's control pin to a digital pin on the Arduino (in this code, it's pin 5).
2. If using a WiFi module for remote control, connect it to the Arduino according to its specifications.
3. Power the Arduino board using USB cable connected to a computer or an external power supply.

**Software Setup:**
1. Install the Arduino IDE on your computer if you haven't.
2. Open the Arduino IDE and create a new sketch.
3. Copy and paste the provided Arduino code.
4. Verify and upload the sketch to your Arduino board.

**Usage:**
1. After uploading the sketch, open the serial monitor (Tools -> Serial Monitor).
2. Ensure that baud rate is set to 9600 (the same as in the code).
3. Enter the following commands into the serial monitor to control the relay:
   - "1 ON" to turn the relay on.
   - "1 OFF" to turn the relay off.
4. If using a WiFi module for remote control, ensure the Arduino is connected to a WiFi network and accessible over the internet.
5. Send the same commands on serial monitor to turn on or off.

**Applications:**
1. Home automation: Control lights, fans, or other appliances remotely.
2. Industrial automation: Control machinery or equipment remotely.
3. IoT projects: Integrate relay control into larger IoT systems for smart home or industrial applications.

