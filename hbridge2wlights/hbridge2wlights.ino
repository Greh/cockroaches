int RTLpin = 23; 
int RTRpin = 22; 
//int LTLpin = 21; 
//int LTRpin = 20; 
//int LBLpin = 16; 
//int LBRpin = 15; 
int RBLpin = 14; 
int RBRpin = 13; 
int delayspd = 1000; 
int spinspd = 256; 

void setup(){
  pinMode(RTLpin, OUTPUT);
  pinMode(RTRpin, OUTPUT);
//  pinMode(LTLpin, OUTPUT);
//  pinMode(LTRpin, OUTPUT);
//  pinMode(LBLpin, OUTPUT);
//  pinMode(LBRpin, OUTPUT);
  pinMode(RBLpin, OUTPUT);
  pinMode(RBRpin, OUTPUT);
}

void loop() {
  //turn everything off 
//  digitalWrite(LBLpin, HIGH);
//  digitalWrite(LBRpin, HIGH); 
  digitalWrite(RBLpin, HIGH);
  digitalWrite(RBRpin, HIGH); 
  //forward 
//  digitalWrite(LBRpin, LOW); 
  digitalWrite(RBLpin, LOW);
//  analogWrite(LTLpin, spinspd); 
  analogWrite(RTRpin, spinspd); 
  delay(delayspd); 
//  analogWrite(LTLpin, 0); 
  analogWrite(RTRpin, 0);
//  digitalWrite(LBRpin, HIGH);
  digitalWrite(RBLpin, HIGH);
  delay(delayspd); 
  //backward
//  digitalWrite(LBLpin, LOW); 
  digitalWrite(RBRpin, LOW);
//  analogWrite(LTRpin, spinspd); 
  analogWrite(RTLpin, spinspd); 
  delay(delayspd); 
//  analogWrite(LTRpin, 0); 
  analogWrite(RTLpin, 0);
//  digitalWrite(LBLpin, HIGH);
  digitalWrite(RBRpin, HIGH);
  delay(delayspd); 
}
