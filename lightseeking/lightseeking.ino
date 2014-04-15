int light = 23;
int go = 22;
int val = 0;
int valnew = 0;

void setup(){
  pinMode(go, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  val = analogRead(light);
  Serial.println(val);
  valnew = map(val, 0, 156, 0, 255); 
  Serial.println(valnew);
  analogWrite(go, valnew);
}
