/*
  Blink Hello World
 */
 
// Pin 13 has the LED on Teensy 3.0
int led = 13;
int dit = 200;
int dah = 800;
int space = 300;
int letterspace = 800-space;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
//h dit dit dit dit
  for(int counter = 0; counter < 4; counter++){
    digitalWrite(led, HIGH);
    delay(dit);
    digitalWrite(led, LOW);
    delay(space);
  }
  delay(letterspace);
//e dit
  digitalWrite(led, HIGH);
  delay(dit);
  digitalWrite(led, LOW);
  delay(space);
  delay(letterspace);
//l dit dah dit dit
  for(int counter = 0; counter < 2; counter++){
    digitalWrite(led, HIGH);
    delay(dit);
    digitalWrite(led, LOW);
    delay(space);
    digitalWrite(led, HIGH);
    delay(dah);
    digitalWrite(led, LOW);
    delay(space);
    digitalWrite(led, HIGH);
    delay(dit);
    digitalWrite(led, LOW);
    delay(space);
    digitalWrite(led, HIGH);
    delay(dit);
    digitalWrite(led, LOW);
    delay(space);
    delay(letterspace);
  }
//o dah dah dah
  for(int counter = 0; counter < 3; counter++){
    digitalWrite(led, HIGH);
    delay(dah);
    digitalWrite(led, LOW);
    delay(space);
  }
  delay(letterspace);
//w dit dah dah
  digitalWrite(led, HIGH);
  delay(dit);
  digitalWrite(led, LOW);
  delay(space);
  digitalWrite(led, HIGH);
  delay(dah);
  digitalWrite(led, LOW);
  delay(space);
  digitalWrite(led, HIGH);
  delay(dah);
  digitalWrite(led, LOW);
  delay(space);
  delay(letterspace);
//o dah dah dah
  for(int counter = 0; counter < 3; counter++){
    digitalWrite(led, HIGH);
    delay(dah);
    digitalWrite(led, LOW);
    delay(space);
  }
  delay(letterspace);
//r dit dah dit
  digitalWrite(led, HIGH);
  delay(dit);
  digitalWrite(led, LOW);
  delay(space);
  digitalWrite(led, HIGH);
  delay(dah);
  digitalWrite(led, LOW);
  delay(space);
  digitalWrite(led, HIGH);
  delay(dit);
  digitalWrite(led, LOW);
  delay(space);
  delay(letterspace);
//l dit dah dit dit
  digitalWrite(led, HIGH);
  delay(dit);
  digitalWrite(led, LOW);
  delay(space);
  digitalWrite(led, HIGH);
  delay(dah);
  digitalWrite(led, LOW);
  delay(space);
  digitalWrite(led, HIGH);
  delay(dit);
  digitalWrite(led, LOW);
  delay(space);
  digitalWrite(led, HIGH);
  delay(dit);
  digitalWrite(led, LOW);
  delay(space);
  delay(letterspace);
//d dah dit dit
  digitalWrite(led, HIGH);
  delay(dah);
  digitalWrite(led, LOW);
  delay(space);
  digitalWrite(led, HIGH);
  delay(dit);
  digitalWrite(led, LOW);
  delay(space);
  digitalWrite(led, HIGH);
  delay(dit);
  digitalWrite(led, LOW);
  delay(space);
  delay(letterspace);
}
