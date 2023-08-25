void setup() {

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  loop();
}

void setRight(){
   digitalWrite(2, HIGH);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW); 
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   delay(250);

   digitalWrite(2, LOW);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW); 
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   delay(250);

   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW); 
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   delay(250);

   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, HIGH); 
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   delay(250);

   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW); 
   digitalWrite(6, HIGH);
   digitalWrite(7, LOW);
   delay(250);

   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW); 
   digitalWrite(6, LOW);
   digitalWrite(7, HIGH);
   delay(250);

   
}

void setLeft(){ 

   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW); 
   digitalWrite(6, HIGH);
   digitalWrite(7, LOW);
   delay(250);

   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, HIGH); 
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   delay(250);

   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW); 
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   delay(250);

   digitalWrite(2, LOW);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW); 
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   delay(250);

   digitalWrite(2, HIGH);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW); 
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   delay(250);
}

void setMid(){
   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, HIGH); 
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   delay(500);

   digitalWrite(2, LOW);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW); 
   digitalWrite(6, HIGH);
   digitalWrite(7, LOW);
   delay(500);

   digitalWrite(2, HIGH);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW); 
   digitalWrite(6, LOW);
   digitalWrite(7, HIGH);
   delay(500);
}

void setPart(){
   digitalWrite(2, HIGH);
   digitalWrite(3, HIGH);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW); 
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   delay(750);

   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, HIGH); 
   digitalWrite(6, HIGH);
   digitalWrite(7, HIGH);
   delay(750);

}

void loop() {
  setRight();
  setLeft();
  setRight();
  setLeft();
  setRight();
  setLeft();
  setRight();
  setLeft();
  setRight();
  setLeft();
  setPart();
  setPart();
  setPart();
  setPart();
  setPart();
  setMid();
  setMid();
  setMid();
  setMid();
  setMid();
  //set
  
}
