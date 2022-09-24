void setup() {
 Serial.begin(9600);
 pinMode(A3,INPUT);
 pinMode(5,OUTPUT);
}

void loop() {
 int value = analogRead(A3);
  Serial.println(value);
 if(value<6000)
  {
    digitalWrite(5,LOW);
  }
  else
  {
    digitalWrite(5,HIGH);
   
  }

}
