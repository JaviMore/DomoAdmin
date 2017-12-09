void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){
  if (Serial.available() > 0) {
    int option = Serial.read();
    if (option == 107) { 
       digitalWrite(LED_BUILTIN, HIGH);
       Serial.println("Enciendo el led");
    }else if(option == 108) {
       digitalWrite(LED_BUILTIN, LOW); 
       Serial.println("Apago el led");
    }
  }
}

