void setup() {
  pinMode(5, OUTPUT);
}
 
void loop() {
  digitalWrite(5, HIGH);   
  delay(1000);              
  digitalWrite(5, LOW);   
  delay(100);  
  digitalWrite(5, HIGH);   
  delay(100);
  digitalWrite(5, LOW);   
  delay(100);  
  digitalWrite(5, HIGH);   
  delay(100);
  digitalWrite(5, LOW);   
  delay(100);
         
}
