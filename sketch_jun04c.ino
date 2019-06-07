int ldr;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(D2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
ldr=analogRead(A0);
Serial.print("LDR:");
Serial.println(ldr);
int mv=map(ldr,0,1024,0,255);
Serial.print("Mapped LDR :");
Serial.println(mv);
Serial.print(D2,mv);
delay(500);
}
