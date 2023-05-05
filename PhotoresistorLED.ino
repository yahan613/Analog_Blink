

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int sensorRead = analogRead(A0);//0~200
  Serial.println(sensorRead);
  if(sensorRead>200){
    sensorRead=200;
  }
  else if(sensorRead<0){
     sensorRead=0;
  }
  int ledblink = map(sensorRead,0,200,0,255);
  analogWrite(9,ledblink);
  delay(1);                    
}
