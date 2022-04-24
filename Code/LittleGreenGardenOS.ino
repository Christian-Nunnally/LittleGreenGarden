bool switch_1 = false;
bool switch_2 = false;
bool switch_3 = false;


void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  
}

void loop() {
  if (digitalRead(7) == HIGH && !switch_1)
  {
      switch_1 = true;
      digitalWrite(2, LOW);
      delay(10000);
      digitalWrite(2, HIGH);
  }
  else if (digitalRead(7) == LOW)
  {
    switch_1 = false;
  }

  if (digitalRead(8) == HIGH && !switch_2)
  {
      switch_2 = true;
      digitalWrite(3, LOW);
      delay(10000);
      digitalWrite(3, HIGH);
  }
  else if (digitalRead(8) == LOW)
  {
    switch_2 = false;
  }

  if (digitalRead(9) == HIGH && !switch_3)
  {
      switch_3 = true;
      digitalWrite(4, LOW);
      delay(10000);
      digitalWrite(4, HIGH);
  }
  else if (digitalRead(9) == LOW)
  {
    switch_3 = false;
  }
  delay(10);
}
