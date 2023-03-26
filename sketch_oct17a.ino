int mos = 9;

void setup() {
  pinMode(mos, OUTPUT);
  
}

void loop() {

   
    digitalWrite(mos, HIGH);
    
    delay(5000);
 
  
    
    digitalWrite(mos,LOW);
    delay(5000);
 
}
