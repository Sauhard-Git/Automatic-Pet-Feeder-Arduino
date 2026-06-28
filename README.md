**🐾 Automatic Pet Feeder using Arduino**

---

**📖 Overview**

The Automatic Pet Feeder is a DIY automation project designed to dispense pet food in a controlled manner. Built using Arduino Uno, a Servo Motor, and an IR Sensor, the feeder detects a pet's presence and releases a measured quantity of food into the bowl.

This project demonstrates the practical application of embedded systems in home automation and pet care.

---

**🎯 Features**

🐶 Automatic food dispensing
🎯 Pet detection using IR Sensor
⚙️ Servo motor controlled gate mechanism
🥣 Controlled food quantity
🔋 Low power consumption
💰 Low-cost DIY solution
📚 Beginner-friendly Arduino project
🛠️ Easy to customize

---

**🛠 Components Used**

Arduino Uno
SG90 Servo Motor
IR Obstacle Sensor
Plastic Bottle (Food Container)
Pet Food Bowl
Jumper Wires
Breadboard
USB Cable

---

**🔌 Circuit Connections**

**IR Sensor**

| Servo Pin | Arduino |
| --------- | ------- |
| Signal    | D9      |
| VCC       | 5V      |
| GND       | GND     |

**IR Sensor**

| IR Pin | Arduino |
| ------ | ------- |
| OUT    | D2      |
| VCC    | 5V      |
| GND    | GND     |

---

**⚙️ Working Principle**

1. _Pet approaches the feeder.
2. The IR sensor detects the pet's presence.
3. Arduino receives the sensor signal.
4. Servo motor rotates to open the food outlet.
5. A measured quantity of food falls into the bowl.
6. Servo returns to its original position, closing the outlet._


**💻 Software**

Arduino IDE

**📚 Libraries Used**

#include <Servo.h>

**🚀 Future Improvements**

1. RTC-based scheduled feeding
2. ESP8266/ESP32 IoT monitoring
3. Mobile App Control
4. Blynk Integration
5. Food Level Detection
6. OLED Display
7. Voice Assistant Integration
8. Camera Monitoring
9. Push Notifications

**🎓 Learning Outcomes**

Arduino Programming
Servo Motor Interfacing
IR Sensor Interfacing
Embedded Systems
Automation Concepts
Hardware Prototyping

📸 Project Preview

Include:

Prototype Image
Circuit Diagram
Working Images
Demo GIF
Video

🤝 Contributing

**_Contributions are welcome! Feel free to fork the repository and submit pull requests for improvements or new features.
_**

**👨‍💻 Author**

_Sauhard Agnihotri

Electronics & Communication Engineering Student

Interested in:

Embedded Systems
IoT
Arduino
Robotics
Automation
Electronics_

**⭐ Support**

_**If you found this project helpful:

⭐ Star this repository

🍴 Fork it

📢 Share it with others**_
