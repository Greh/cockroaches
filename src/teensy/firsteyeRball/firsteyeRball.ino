int eyeball = 21;
int val = 0;

void setup(){
  pinMode(eyeball, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  val =analogRead(eyeball);
  Serial.println(val);
}
