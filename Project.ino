int aout=12;
int lpin=13;
float amount;
void setup() {
  // put your setup code here, to run once:
pinMode(lpin,OUTPUT);
Serial.begin(9600);
long int sensorValue=analogRead(A0);
  Serial.println(sensorValue);
 amount=(sensorValue*1024/5.0)/1000000;
  Serial.println(amount);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(lpin,HIGH);
 if(amount>=0.03)
  digitalWrite(lpin,LOW);
  
}
