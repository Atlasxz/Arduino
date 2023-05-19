// C++ code
//
void setup()
{
  pinMode(4, INPUT);
  pinMode(1, OUTPUT);
  pinMode(5, INPUT);
  pinMode(2, OUTPUT);
  pinMode(6, INPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  if (digitalRead(4) == HIGH) {
    digitalWrite(1, HIGH);
  } else {
    digitalWrite(1, LOW);
  }
  if (digitalRead(5) == HIGH) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
  if (digitalRead(6) == HIGH) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}