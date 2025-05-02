// =========================
// PIN CONFIGURATION
// =========================

// Motor pins
const int IN1 = 2;   // Left motor direction
const int ENA = 5;   // Left motor speed (PWM)
const int IN2 = 4;   // Right motor direction
const int ENB = 6;   // Right motor speed (PWM)

// Ultrasonic sensor pins
const int trigPin = 12;
const int echoPin = 13;

// =========================
// SPEED CONSTANTS
// =========================
const int motorSpeed = 200; // Forward speed
const int turnSpeed = 200;  // Turning speed