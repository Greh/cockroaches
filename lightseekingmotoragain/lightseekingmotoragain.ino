int RTLpin = 23;
int RTRpin = 22;
int LTLpin = 21;
int LTRpin = 20;
int LBLpin = 16;
int LBRpin = 15;
int RBLpin = 14;
int RBRpin = 13;
int val = 0;
int valnew = 0;
int light = 17;

void setup(){
  pinMode(RTLpin, OUTPUT);
  pinMode(RTRpin, OUTPUT);
  pinMode(LTLpin, OUTPUT);
  pinMode(LTRpin, OUTPUT);
  pinMode(LBLpin, OUTPUT);
  pinMode(LBRpin, OUTPUT);
  pinMode(RBLpin, OUTPUT);
  pinMode(RBRpin, OUTPUT);
  Serial.begin(9600);
}
void loop(){
    digitalWrite(RBRpin, HIGH);
    val = analogRead(light);
    Serial.println(val);
    valnew = map(val, 0, 156, 0, 255);
    Serial.println(valnew);
    digitalWrite(RBLpin, LOW);
    analogWrite(RTRpin, valnew);
}
