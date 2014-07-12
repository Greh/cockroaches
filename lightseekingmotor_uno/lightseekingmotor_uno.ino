int TLpin = 5;
int TRpin = 3;
int BLpin = 11;
int BRpin = 12;
int light = A1;
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
  valnew = map (val, 0, 1023, 0, 255);
  //Serial.println(valnew);
  digitalWrite(BRpin, LOW);
  analogWrite(TLpin, valnew);
  delay(1000);
}
