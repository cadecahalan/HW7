int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0; // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
 
if (sensorValue > 255.75) {
  digitalWrite(5, HIGH);
}  else {
  digitalWrite(5, LOW);
}

if (sensorValue > 511.5) {
  digitalWrite(6, HIGH);
}  else {
  digitalWrite(6, LOW);
}

if (sensorValue > 767.25) {
  digitalWrite(9, HIGH);
}  else {
  digitalWrite(9, LOW);
}
}
