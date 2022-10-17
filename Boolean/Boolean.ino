int v1 =15;
int v2 =123;

void setup() {
  Serial.begin(9600);

}

void loop() {
  //Bollean =1 bit - 0 1 -true false

  boolean b=v1>20;
  if(b){
    Serial.println(v1);
    }
 delay(500);
}
