const int sensorPin = A0;
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  // Measure the amount of light
  int lightValue = analogRead(sensorPin);

  // Print the measurement to the computer
  Serial.println(lightValue);

  // Convert the sensor value (0-1023)
  // into LED brightness (0-255)
int brightness = map(lightValue, 2, 20, 255, 0);

  brightness = constrain(brightness, 0, 255);

  // Set LED brightness
  analogWrite(ledPin, brightness);

  delay(100);
}