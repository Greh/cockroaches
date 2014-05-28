int eyeball = 23; 
int light = 21;
int val = 0;
int valnew= 0;

void setup(){
  pinMode(eyeball, OUTPUT);
  pinMode(light, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  val = analogRead(eyeball);
  Serial.println(val);
  valnew = map(val, 98, 102, 0, 255);
  analogWrite(light, valnew);
}
