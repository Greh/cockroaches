int TLpin = 21;
int TRpin = 20;
int BLpin = 14;
int BRpin = 13;
int light = 22;
int val = 0;
int valnew = 0;

void setup(){
  pinMode(TLpin, OUTPUT);
  pinMode(TRpin, OUTPUT);
  pinMode(BLpin, OUTPUT);
  pinMode(BRpin, OUTPUT);
  pinMode(light, INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(BLpin, HIGH);
  digitalWrite(BRpin, HIGH);
  val = analogRead(light);
  Serial.println(val);
  valnew = map (val, 190, 50, 0, 255);
  //Serial.println(valnew);
  digitalWrite(BRpin, LOW);
  analogWrite(TLpin, valnew);
}
