LED Blink Sequence

The LED Blink Sequence project is a beginner-friendly Arduino project that demonstrates how to control multiple LEDs using digital output pins. Three LEDs are connected to an Arduino Uno and programmed to turn ON and OFF sequentially with a fixed delay. This project introduces the fundamentals of Arduino programming, digital output control, and electronic circuit interfacing.

---

Hardware Required

- Arduino Uno
- 3 LEDs (Red, Yellow, Green or any color)
- 3 × 220 Ω Resistors
- Breadboard
- Jumper Wires
- USB Cable
- Computer/Laptop

---

Software Required

- Arduino IDE
- USB Driver for Arduino Uno (if required)

---

Theory

Arduino

Arduino is an open-source electronics platform consisting of programmable microcontroller boards and easy-to-use software. It is widely used for developing embedded systems, automation projects, robotics, and Internet of Things (IoT) applications. The Arduino Uno is one of the most popular development boards because of its simplicity and beginner-friendly design.

---

Arduino IDE

The Arduino Integrated Development Environment (IDE) is the software used to write, compile, and upload programs (called sketches) to an Arduino board. It supports programming in C/C++ and provides tools such as the Serial Monitor, Serial Plotter, and library management for easier project development.

---

LED Interfacing

An LED (Light Emitting Diode) is a semiconductor device that emits light when electric current flows through it. In Arduino projects, LEDs are commonly connected to digital output pins through a current-limiting resistor (typically 220 Ω) to prevent damage.

When the Arduino outputs HIGH (5V), the LED turns ON. When it outputs LOW (0V), the LED turns OFF.

---

Circuit Connections

| Arduino Uno Pin | Component |
|-----------------|-----------|
| Pin 13 | LED 1 (Anode via 220Ω resistor) |
| Pin 12 | LED 2 (Anode via 220Ω resistor) |
| Pin 11 | LED 3 (Anode via 220Ω resistor) |
| GND | LED Cathodes |
---

Circuit Diagram

<img width="872" height="728" alt="image" src="https://github.com/user-attachments/assets/7c3bea3d-952a-4adf-97f7-402000b0ec1a" />

---

Program

The complete Arduino source code is available in the `LED Blink Sequence .ino` file in this project folder.

---

Working Principle

The Arduino initializes pins 13, 12, and 11 as output pins. Inside the "loop()" function, each LED is turned ON using "digitalWrite(HIGH)", remains ON for a short delay, and is then turned OFF using "digitalWrite(LOW)". This sequence repeats continuously, creating a running LED effect.

---

Procedure

1. Connect the LEDs to Arduino Uno through 220 Ω resistors.
2. Connect all LED cathodes to the GND pin.
3. Open the Arduino IDE.
4. Write or open the LED Blink Sequence program.
5. Select the correct Arduino board and COM port.
6. Upload the program to the Arduino Uno.
7. Observe the LEDs blinking sequentially.

---

Expected Outcome

- The three LEDs blink one after another in a continuous sequence.
- The project demonstrates digital output control using Arduino.
- Users gain practical experience in LED interfacing, Arduino programming, and basic embedded system concepts.

---
