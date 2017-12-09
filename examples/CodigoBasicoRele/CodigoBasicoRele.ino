int rele1 = 2;
int rele2 = 3;
int rele3 = 4;
int rele4 = 5;

void setup() {
pinMode(rele1, OUTPUT);
digitalWrite(rele1, LOW);
delay(1000);
pinMode(rele2, OUTPUT);
digitalWrite(rele2, LOW);
delay(1000);
pinMode(rele3, OUTPUT);
digitalWrite(rele3, LOW);
delay(1000);
pinMode(rele4, OUTPUT);
digitalWrite(rele4, LOW);
delay(1000);
}

void loop() {
     digitalWrite(rele1, HIGH);
     delay(5000);
     digitalWrite(rele1, LOW);
     delay(5000);
     digitalWrite(rele2, HIGH);
     delay(5000);
     digitalWrite(rele2, LOW);
     delay(5000);
     digitalWrite(rele3, HIGH);
     delay(5000);
     digitalWrite(rele3, LOW);
     delay(5000);
     digitalWrite(rele4, HIGH);
     delay(5000);
     digitalWrite(rele4, LOW);
     delay(5000);

}
