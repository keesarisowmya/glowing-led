int state;
void setup() {
  // put your setup code here, to run once:
pinMode(D0,INPUT);
Serial.begin(9600);
pinMode(D4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
state=digitalRead(D0);
Serial.println(state);
digitalWrite(D4,state);
delay(500);
}
