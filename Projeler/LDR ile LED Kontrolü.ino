#define led PC13
void setup() {
pinMode (led, OUTPUT);
Serial.begin(9600);
}
void loop() {
int isik=analogRead(PA3);
Serial.println(isik);
delay(200);
if (isik>250){
  digitalWrite(led,LOW);
}
else{
  digitalWrite(led,HIGH);
}
}
