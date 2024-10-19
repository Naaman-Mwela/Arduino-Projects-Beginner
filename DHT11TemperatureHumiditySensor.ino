#include <DHT.h>
#define Type DHT11
int sensePin=13;
DHT HT(sensePin,Type);
float humidity;
float tempC;
float tempF;
int wait=500;

void setup() {
Serial.begin(9600);  
HT.begin();
delay(wait);

}

void loop() {
humidity =HT.readHumidity();
tempC= HT.readTemperature();
tempF= HT.readTemperature(true);
Serial.print("humidity: ");
Serial.print(humidity);
Serial.print(" Temperature in: ");
Serial.print(tempC);
Serial.print(" C ");
Serial.print(tempF);
Serial.println(" F ");
delay(wait);



}
