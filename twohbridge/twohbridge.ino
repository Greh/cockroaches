int LTL = 5; //PWM
int LTR = 3; //PWM
int LBL = 11; //digital pin
int LBR = 12; //digital pin

int RTL = ; //PWM
int RTR = ; //PWM
int RBL = ; //digital pin
int RBR = ; //digital pin

int eyeballLeft = A1; //analog read
int eyeballRight = ; //analog read

int brainLeft = 0;
int brainRight = 0;

void setup(){
  pinMode(LTL, OUTPUT);
  pinMode(LTR, OUTPUT);
  pinMode(LBL, OUTPUT);
  pinMode(LBR, OUTPUT);
  
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
  //react
  if (brainLeft > 2 * brainRight){
    //safety
    digitalWrite(LBL, HIGH); //NPN
    digitalWrite(RBL, HIGH); //NPN
    analogWrite(LTR, 0); //PNP
    analogWrite(RTR, 0); //PNP
    //steering
    digitalWrite(LBR, LOW); //NPN
    digitalWrite(RBR, LOW); //NPN
    analogWrite(LTL, brainRight); //PNP
    analogWrite(RTL, Malp); //PNP how calculate Malp??? need testing
    delay(1000);
  }
  elif (brainLeft > brainRight){
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
  elif (brainRight > 2 * brainLeft){
    //safety
    digitalWrite(RBR, HIGH); //NPN
    digitalWrite(LBR, HIGH); //NPN
    analogWrite(RTL, 0); //PNP
    analogWrite(LTL, 0); //PNP
    //steering
    digitalWrite(RBL, LOW); //NPN
    digitalWrite(LBL, LOW); //NPN
    analogWrite(RTR, brainRight); //PNP
    analogWrite(LTR, Malp); //PNP how calculate Malp??? need testing
    //delay(1000);
  }
  elif (brainRight > brainLeft){
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
  
    
    
    
  
