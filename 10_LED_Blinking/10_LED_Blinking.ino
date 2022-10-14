void setup() {
  
  for(int i=2;i<12;i++){
      pinMode(i,OUTPUT);
    }
}

void loop() {
  for(int i=2;i<12;i++){
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    delay(200);
    }

   for(int i=10;i>2;i--){
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    delay(200);
    }
  
}
