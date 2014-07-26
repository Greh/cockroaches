int LTL = 5; //PWM
int LTR = 3; //PWM
int LBL = 11; //digital pin
int LBR = 12; //digital pin

int RTL = 6; //PWM
int RTR = 9; //PWM
int RBL = 8; //digital pin
int RBR = 13; //digital pin

int eyeballLeft = A1; //analog read
int eyeballRight = A2; //analog read
int Malp = 0;

int brainLeft = 0;
int brainRight = 0;

void setup(){
  //This is all of the pins controlling the left motor 
  pinMode(LTL, OUTPUT);
  pinMode(LTR, OUTPUT);
  pinMode(LBL, OUTPUT);
  pinMode(LBR, OUTPUT);
  
  //This is all of the pins controlling the right motor
  pinMode(RTL, OUTPUT);
  pinMode(RTR, OUTPUT);
  pinMode(RBL, OUTPUT);
  pinMode(RBR, OUTPUT);
  
  pinMode(eyeballLeft, INPUT);
  pinMode(eyeballRight, INPUT);
  Serial.begin(9600);
}

void loop(){
  //safety
  digitalWrite(LBL, HIGH);
  digitalWrite(LBR, HIGH);
  digitalWrite(RBL, HIGH);
  digitalWrite(RBR, HIGH);
  analogWrite(LTL, 0);
  analogWrite(LTR, 0);
  analogWrite(RTL, 0);
  analogWrite(RTR, 0);
  
  //look around
  brainLeft = analogRead(eyeballLeft);
  brainRight = analogRead(eyeballRight);
  
  //map brain inputs to motor numbers 
  Malp = brainRight - brainLeft;
  
  //react
  if (brainLeft > 2 * brainRight){
    //case 1: sharp left turn
    //safety
    digitalWrite(LBL, HIGH); //NPN
    digitalWrite(RBL, HIGH); //NPN
    analogWrite(LTR, 0); //PNP
    analogWrite(RTR, 0); //PNP
    //steering
    digitalWrite(LBR, LOW); //NPN
    digitalWrite(RBR, LOW); //NPN
    analogWrite(LTL, brainRight); //PNP
    analogWrite(RTL, Malp); //how fast should this motor spin backwards
    delay(1000);
  }
  else if (brainLeft > brainRight){
    //case 2: soft left turn 
    //safety
    digitalWrite(LBL, HIGH); //NPN
    digitalWrite(RBR, HIGH); //NPN
    analogWrite(LTR, 0); //PNP
    analogWrite(RTL, 0); //PNP
    //steering
    digitalWrite(LBR, LOW); //NPN
    digitalWrite(RBL, LOW); //NPN
    analogWrite(LTL, brainRight); //PNP
    analogWrite(RTR, brainLeft); //PNP
    //delay(1000);
  }
  else if (brainRight > 2 * brainLeft){
    //case 3: sharp turn to the right
    //safety
    digitalWrite(RBR, HIGH); //NPN
    digitalWrite(LBR, HIGH); //NPN
    analogWrite(RTL, 0); //PNP
    analogWrite(LTL, 0); //PNP
    //steering
    digitalWrite(RBL, LOW); //NPN
    digitalWrite(LBL, LOW); //NPN
    analogWrite(RTR, brainRight); //PNP
    analogWrite(LTR, Malp); //how fast should this motor spin backwards? 
    //delay(1000);
  }
  else if (brainRight > brainLeft){
    //case 4: soft turn to the left 
    //safety
    digitalWrite(RBL, HIGH); //NPN
    digitalWrite(LBR, HIGH); //NPN
    analogWrite(RTR, 0); //PNP
    analogWrite(LTL, 0); //PNP
    //steering
    digitalWrite(RBR, LOW); //NPN
    digitalWrite(LBL, LOW); //NPN
    analogWrite(RTL, brainRight); //PNP
    analogWrite(LTR, brainLeft); //PNP
    //delay(1000);
  }
  else {
  //delay(1);
  }
}
  
    
    
    
  
