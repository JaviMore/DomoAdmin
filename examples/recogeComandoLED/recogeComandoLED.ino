void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){

    int option = Serial.read();
    if (option == 107) { 
       digitalWrite(LED_BUILTIN, HIGH);
       Serial.println("Led Encendido");
    }else if(option == 108) {
       digitalWrite(LED_BUILTIN, LOW); 
       Serial.println("Led Apagado");
    }

}

