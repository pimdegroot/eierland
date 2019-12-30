// the setup function runs once when you press reset or power the board
unsigned int rdelay;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(PB8, OUTPUT);
  pinMode(PB9, OUTPUT);
  pinMode(PB10, OUTPUT);
  pinMode(PB11, OUTPUT);
  pinMode(PB12, OUTPUT);
  pinMode(PB13, OUTPUT);
  pinMode(PB14, OUTPUT);
  pinMode(PB15, OUTPUT);

  pinMode(PB6, OUTPUT);
  pinMode(PB7, OUTPUT);

  pinMode(PA0, OUTPUT);
  pinMode(PA1, OUTPUT);
  pinMode(PA2, OUTPUT);
  pinMode(PA3, OUTPUT);
  pinMode(PA4, OUTPUT);
  pinMode(PA5, OUTPUT);
  pinMode(PA6, OUTPUT);
  pinMode(PA7, OUTPUT);

  digitalWrite(PB6, LOW);
  digitalWrite(PB7, LOW);
  delay(2000);
  digitalWrite(PB6, HIGH);
  delay(2000);
  digitalWrite(PB7,HIGH);

  rdelay = 20;

  
}

// the loop function runs over and over again forever
void loop() {
  
  
  digitalWrite(PA0, HIGH);
  digitalWrite(PB8,LOW);
  digitalWrite(PB9,LOW);
  digitalWrite(PB10,LOW);
  digitalWrite(PB11,LOW);
  digitalWrite(PB12,LOW);
  delay(rdelay);
  digitalWrite(PB13,LOW);
  delay(rdelay);
  digitalWrite(PB14,LOW);
  delay(rdelay);
  digitalWrite(PB15,LOW);

  delay(2000);
  digitalWrite(PA0, LOW);
  digitalWrite(PA1, HIGH);

  Serial.println("Blink");

  digitalWrite(PB11,HIGH);
  delay(rdelay);
  digitalWrite(PB10,HIGH);
  delay(rdelay);
  digitalWrite(PB9,HIGH);
  delay(rdelay);
  digitalWrite(PB8,HIGH);

  delay(1000);
  digitalWrite(PA1, LOW);
  digitalWrite(PA2, HIGH);

  digitalWrite(PB11,LOW);
  delay(rdelay);
  digitalWrite(PB10,LOW);
  delay(rdelay);
  digitalWrite(PB9,LOW);
  delay(rdelay);
  digitalWrite(PB8,LOW);

  delay(1000);
  digitalWrite(PA2, LOW);
  digitalWrite(PA3, HIGH);

  Serial.println("Blink");

  digitalWrite(PB11,HIGH);
  delay(rdelay);
  digitalWrite(PB10,HIGH);
  delay(rdelay);
  digitalWrite(PB9,HIGH);
  delay(rdelay);
  digitalWrite(PB8,HIGH);

  delay(1000);
  digitalWrite(PA3, LOW);
  digitalWrite(PA4, HIGH);

  digitalWrite(PB11,LOW);
  delay(rdelay);
  digitalWrite(PB10,LOW);
  delay(rdelay);
  digitalWrite(PB9,LOW);
  delay(rdelay);
  digitalWrite(PB8,LOW);

  delay(2000);
  digitalWrite(PA4, LOW);
  digitalWrite(PA5, HIGH);

  Serial.println("Blink");

  digitalWrite(PB12,HIGH);
  delay(rdelay);
  digitalWrite(PB13,HIGH);
  delay(rdelay);
  digitalWrite(PB14,HIGH);
  delay(rdelay);
  digitalWrite(PB15,HIGH);

  delay(1000);
  digitalWrite(PA5, LOW);
  digitalWrite(PA6, HIGH);

  digitalWrite(PB12,LOW);
  delay(rdelay);
  digitalWrite(PB13,LOW);
  delay(rdelay);
  digitalWrite(PB14,LOW);
  delay(rdelay);
  digitalWrite(PB15,LOW);

  delay(1000);
  digitalWrite(PA6, LOW);
  digitalWrite(PA7, HIGH);

  Serial.println("Blink");

  digitalWrite(PB12,HIGH);
  delay(rdelay);
  digitalWrite(PB13,HIGH);
  delay(rdelay);
  digitalWrite(PB14,HIGH);
  delay(rdelay);
  digitalWrite(PB15,HIGH);

  delay(1000);
  digitalWrite(PA7, LOW);
  
  
  
}
