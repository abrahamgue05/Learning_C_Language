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

// =========================
// INITIAL SETUP
// =========================
void setup() {
  Serial.begin(9600);

  // Motor pins
  pinMode(IN1, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);

  // Ultrasonic sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}