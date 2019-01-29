void setup() {

Serial.begin(9600);
pinMode(8,OUTPUT);
}

void loop() {
  
  int lumiere = analogRead(0);

  Serial.println("lumiere : ");
  Serial.println(lumiere);
  delay(1000);
  digitalWrite(8,LOW);
  
  if(lumiere > 300){

    int lumiere = analogRead(0);
    delay(5000);
    lumiere = analogRead(0);
  
      if(lumiere > 300){
      Serial.println("alarm");
      digitalWrite(8,HIGH);
      lumiere = analogRead(0);
      }
  
}
}
