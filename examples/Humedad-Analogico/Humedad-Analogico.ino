const int sensorPin = A0;
int contador;
void setup() {
   Serial.begin(9600);
   contador = 0;
}
 
void loop() 
{
   
   int humedad = analogRead(sensorPin);
   Serial.print("Medición de humedad número ");
   Serial.print(contador);
   Serial.print( " : ");
   Serial.println(humedad);
   contador++;
   delay(5000);
}
