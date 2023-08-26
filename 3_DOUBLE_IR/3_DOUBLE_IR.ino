const int sensor1=2;
const int sensor2=3;


void setup() {
pinMode(sensor1,INPUT);
pinMode(sensor2,INPUT);
Serial.begin(9600);
}

void loop() {
  int value1=digitalRead(sensor1);
  int value2=digitalRead(sensor2);
  
  Serial.print("value of sensor1:\t");
  Serial.println(value1);
  Serial.print("value of sensor2:\t");
  Serial.println(value2);
  delay(1000);

}
