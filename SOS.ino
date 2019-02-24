
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(7, OUTPUT);
}


void loop() {

  //Blinking the first S
  digitalWrite(7, HIGH);   
  delay(500);                       
  digitalWrite(7, LOW);    
  delay(500);
  digitalWrite(7, HIGH);   
  delay(500);                       
  digitalWrite(7, LOW);    
  delay(500);
  digitalWrite(7, HIGH);   
  delay(500);                       
  digitalWrite(7, LOW);    
  delay(500);
  
  //Blinking the O
  digitalWrite(7, HIGH);   
  delay(1500);                       
  digitalWrite(7, LOW);    
  delay(500);
  digitalWrite(7, HIGH);   
  delay(1500);                      
  digitalWrite(7, LOW);    
  delay(500);
  digitalWrite(7, HIGH);   
  delay(1500);                       
  digitalWrite(7, LOW);    
  delay(500);

  //Blinking the second S
  digitalWrite(7, HIGH);
  delay(500);                       
  digitalWrite(7, LOW);    
  delay(100);
  digitalWrite(7, HIGH);   
  delay(500);                       
  digitalWrite(7, LOW);    
  delay(100);
  digitalWrite(7, HIGH);   
  delay(500);                       
  digitalWrite(7, LOW);    
  delay(1000);
}
