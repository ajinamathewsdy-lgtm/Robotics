Obstacle Detection using IR and Ultrasonic Sensors

This project demonstrates obstacle detection using both an IR (Infrared) Sensor and an Ultrasonic Sensor with an Arduino Uno. The IR sensor detects the presence of nearby objects, while the ultrasonic sensor measures the distance between the sensor and an object. Two LEDs provide visual indications for each sensor, and the measured distance and detection status are displayed through the Serial Monitor.

---

Hardware Required

- Arduino Uno
- IR Sensor Module
- HC-SR04 Ultrasonic Sensor
- 2 LEDs
- 2 × 220 Ω Resistors
- Breadboard
- Jumper Wires
- USB Cable

---

Software Required

- Arduino IDE

---

Theory

Arduino Uno

The Arduino Uno is an open-source microcontroller board based on the ATmega328P. It is widely used in robotics, automation, and embedded systems for controlling sensors and actuators.

---

Arduino IDE

The Arduino IDE is used to write, compile, and upload programs (sketches) to the Arduino board. It also provides the Serial Monitor for debugging and displaying sensor readings.

---

IR Sensor

An Infrared (IR) sensor detects nearby objects by transmitting infrared light and measuring its reflection. When an object is detected, the sensor output changes, allowing the Arduino to identify the presence of an obstacle.

---

Ultrasonic Sensor

The HC-SR04 ultrasonic sensor measures distance by transmitting ultrasonic sound waves and calculating the time taken for the echo to return. The Arduino converts this time into distance measured in centimeters.

---

LED Interfacing

Two LEDs are connected to the Arduino as visual indicators. One LED lights up when the IR sensor detects an obstacle, while the other lights up when the ultrasonic sensor detects an object within 15 cm.

---

Serial Monitor

The Serial Monitor displays:

- IR sensor status (Obstacle Detected / No Obstacle)
- Distance measured by the ultrasonic sensor
- Continuous monitoring messages for debugging and observation

---

Circuit Connections

| Arduino Uno Pin | Component |
|-----------------|-----------|
| Pin 2 | IR Sensor OUT |
| 5V | IR Sensor VCC |
| GND | IR Sensor GND |
| Pin 9 | HC-SR04 TRIG |
| Pin 10 | HC-SR04 ECHO |
| 5V | HC-SR04 VCC |
| GND | HC-SR04 GND |
| Pin 12 | IR Indicator LED (Anode through 220 Ω resistor) |
| Pin 13 | Ultrasonic Indicator LED (Anode through 220 Ω resistor) |
| GND | LED Cathodes |
---

Circuit Diagram

<img width="890" height="761" alt="image" src="https://github.com/user-attachments/assets/9ddf6539-59a8-426f-afba-0581225b76de" />

---

Program

The complete Arduino source code is available in the "Obstacle Detection Using IR & Ultrasonic Sensors .ino" file.

---

Working Principle

The Arduino continuously monitors both the IR sensor and the ultrasonic sensor. If the IR sensor detects an obstacle, the corresponding LED connected to pin 12 turns ON and a detection message is displayed on the Serial Monitor. Simultaneously, the ultrasonic sensor measures the distance to the nearest object. If the measured distance is less than 15 cm, the LED connected to pin 13 turns ON. The measured distance and obstacle detection status are continuously updated on the Serial Monitor.

---

Procedure

1. Connect the IR sensor, ultrasonic sensor, and LEDs according to the circuit connections.
2. Open the Arduino IDE.
3. Write or open the program.
4. Select the correct Arduino board and COM port.
5. Upload the program to the Arduino Uno.
6. Open the Serial Monitor and set the baud rate to 9600.
7. Place objects in front of the sensors and observe the LEDs and Serial Monitor output.

---

Expected Outcome

- The IR sensor detects nearby obstacles and turns ON the IR indicator LED.
- The ultrasonic sensor continuously measures and displays the distance in centimeters.
- The ultrasonic indicator LED turns ON when an object is detected within 15 cm.
- The Serial Monitor continuously displays the obstacle status and measured distance.

---
