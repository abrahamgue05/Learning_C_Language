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

// =========================
// MOTOR CONTROL FUNCTIONS
// =========================

// Move forward
void moveForward() {
  digitalWrite(IN1, HIGH);
  analogWrite(ENA, motorSpeed);

  digitalWrite(IN2, LOW);
  analogWrite(ENB, motorSpeed);
}

// Turn left in place
void turnLeftInPlace() {
  Serial.println("Turning left...");

  digitalWrite(IN1, LOW);         // Left motor backward
  analogWrite(ENA, turnSpeed);

  digitalWrite(IN2, LOW);         // Right motor forward
  analogWrite(ENB, turnSpeed);

  delay(1200); // Adjust for ~90° turn
}

// Stop both motors
void stopMotors() {
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}

// =========================
// ULTRASONIC SENSOR FUNCTIONS
// =========================

// Measure distance using ultrasonic sensor
long checkDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  float distance = pulseIn(echoPin, HIGH) / 58.0; // Convert time to cm
  delay(10);
  return distance;
}

// Print distance to serial monitor
void displayDistance() {
  int distance = checkDistance();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(100);
}

// =========================
// MAIN LOOP
// =========================
void loop() {
  int distance = checkDistance();
  displayDistance();

  if (distance < 15) {
    stopMotors();         // Stop if obstacle is too close
    delay(300);
    turnLeftInPlace();    // Turn left to avoid obstacle
    stopMotors();
  } else {
    moveForward();        // Move forward if path is clear
    delay(10);
  }
}