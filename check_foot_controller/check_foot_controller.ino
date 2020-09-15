#define SERIAL Serial

void setup() {
  SERIAL.begin(115200);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
}

void loop() {
  SERIAL.println("Pin 3 is : ");
  SERIAL.println(digitalRead(3));
  SERIAL.println("Pin 4 is : ");
  SERIAL.println(digitalRead(4));
  SERIAL.println("Pin 5 is : ");
  SERIAL.println(digitalRead(5));
  SERIAL.println("Pin 6 is : ");
  SERIAL.println(digitalRead(6));
  SERIAL.println("Pin 7 is : ");
  SERIAL.println(digitalRead(7));
  SERIAL.println("Pin 8 is : ");
  SERIAL.println(digitalRead(8));
  SERIAL.println("Pin 9 is : ");
  SERIAL.println(digitalRead(9));
  SERIAL.println("Pin 10 is : ");
  SERIAL.println(digitalRead(10));
  SERIAL.println("Pin 11 is : ");
  SERIAL.println(digitalRead(11));
  SERIAL.println("Pin 12 is : ");
  SERIAL.println(digitalRead(12));
  SERIAL.println("Pin 13 is : ");
  SERIAL.println(digitalRead(13));

  delay(1000);
}
