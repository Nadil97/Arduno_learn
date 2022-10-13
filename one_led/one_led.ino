void setup() {
  //initiate pin 2 as output
  pinMode(2,OUTPUT); 

}

void loop() {
 digitalWrite(2,HIGH);
 delay(1000); // wait for 1000 millisecond(s)
 digitalWrite(2,LOW);
 delay(1000); //wait for 1000 millisecond(s)
}
