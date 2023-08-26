const int IRSensorPin = 2; // IR Sensor is connected to digital pin 2
const int ledPin = 13;     // LED is connected to digital pin 13

void setup() {
  pinMode(IRSensorPin, INPUT); // set IRSensorPin as input
  pinMode(ledPin, OUTPUT);     // set ledPin as output
}

void loop() {
  int sensorValue = digitalRead(IRSensorPin); // read the input from the sensor
  
  // if the sensor's output is HIGH (obstacle detected), turn on the LED
  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH);
  } 
  // if the sensor's output is LOW (no obstacle), turn off the LED
  else {
    digitalWrite(ledPin, LOW);
  }
}