int trigPin = 11;  // Trigger
int echoPin = 12;  // Echo
int ledPin = 13;   // LED to indicate if the dustbin is filled
int threshold = 30; // Adjust this threshold based on your dustbin and sensor setup

long duration, cm, inches;

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  pinMode(trigPin, OUTPUT);  // Set trigPin as an output
  pinMode(echoPin, INPUT);   // Set echoPin as an input
  pinMode(ledPin, OUTPUT);   // Set ledPin as an output
}

void loop() {
  // Trigger the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the duration of the echo pulse
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  // Convert the time into distance (in inches and centimeters)
  cm = (duration / 2) / 29.1;   // Divide by 29.1 or multiply by 0.0343
  inches = (duration / 2) / 74; // Divide by 74 or multiply by 0.0135

  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(cm);
  Serial.print("cm / ");
  Serial.print(inches);
  Serial.println("in");

  // Check if the dustbin is filled based on the threshold
  if (cm < threshold) {
    digitalWrite(ledPin, HIGH);  // Turn on the LED to indicate the dustbin is filled
    Serial.println("Dustbin is filled!");
    // You can add additional actions here, such as sending a notification.
  } else {
    digitalWrite(ledPin, LOW);   // Turn off the LED if the dustbin is not filled
  }

  delay(250);  // Delay before the next measurement
}
