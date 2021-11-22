int a[] = {13, 12, 8};

void setup() {
  pinMode (a[0], OUTPUT);
  pinMode (a[1], OUTPUT);
  pinMode (a[2], OUTPUT);

}

void loop() {

  for (int i = 0; i < 3; i++)
  { digitalWrite(a[i], HIGH);
    delay(1000);
    digitalWrite(a[i], LOW) ;
    delay(1000);
  }

   digitalWrite(a[1], HIGH);
    delay(1000);
    digitalWrite(a[1], LOW) ;
    delay(1000);
  
}

