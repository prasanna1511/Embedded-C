**Voice Controller with Arduino Board**

This is an experiment for voice-controlled system using an Arduino board. With this setup, you can control LEDs or other devices by speaking commands into a connected microphone.

### Hardware Required:
- Arduino board
- LEDs (or other output devices)
- Jumper wires
- Battery pack or USB power supply for Arduino

### Installation and Setup:
1. **Connect Hardware:**
   - Wire the microphone module to the Arduino board according to its datasheet.
   - Connect LEDs or other output devices to the Arduino pins.
   - Ensure the Arduino is powered either through a battery pack or USB power supply.

2. **Upload Code:**
   - Open the Arduino IDE and upload the provided code (`voice_controller.ino`).
3. **Configure Serial Monitor:**
   - Open the Serial Monitor in the Arduino IDE (Tools > Serial Monitor).
   - Set the baud rate to 9600.

4. **Test Setup:**
   - Speak commands into the microphone (e.g., "all on" or "all off").
   - Verify that the LEDs respond accordingly.

### Application and Uses:
- **Home Automation:** Control lights, fans, or appliances with voice commands.
- **IoT Integration:** Connect the Arduino board to Wi-Fi using a compatible module (e.g., ESP8266) to control devices remotely via voice commands.
- **Accessibility:** Assist individuals with mobility impairments by providing hands-free control of electronic devices.
- **Education:** Learn about microcontroller programming and voice recognition systems through hands-on projects.

### Step-by-Step Explanation:
1. **Setup:** Initialize serial communication and pin modes in the Arduino `setup()` function.
2. **Loop:** Continuously check for incoming serial data.
3. **Voice Recognition:** Read characters from the serial buffer until a '#' character is received, indicating the end of a command.
4. **Command Processing:** Compare the received command with predefined phrases (e.g., "*all on", "*all off") and execute corresponding actions (e.g., turn LED on or off).
5. **Reset Voice Buffer:** Clear the voice buffer to prepare for the next command.
