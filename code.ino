#include <Servo.h>

Servo feederServo;  // Create servo object

const int irSensorPin = 7; // Changed from 2 to 7 as per your connection
int sensorState = 0;

void setup() {
  feederServo.attach(6);      // Attaches the servo on pin 6 to the servo object
  pinMode(irSensorPin, INPUT); // Set IR sensor pin as input
  
  feederServo.write(0);       // Initialize flap to closed position (0 degrees)
  delay(1000);
}

void loop() {
  // Read the state of the IR sensor from pin D7
  sensorState = digitalRead(irSensorPin);

  // If the sensor detects a pet (LOW state for most obstacle sensors)
  if (sensorState == LOW) { 
    // Open the feeding flap
    feederServo.write(90);    // Rotate to 90 degrees (adjust angle based on your mechanism)
    delay(500);              // Keep it open for 2 seconds to let the food drop
    
    // Close the feeding flap
    feederServo.write(0);     // Reset back to 0 degrees
    delay(500);              // 5-second delay to prevent continuous dispensing
  }
  delay(100);
}
