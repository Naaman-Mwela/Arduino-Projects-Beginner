#include<LiquidCrystal.h>
#include<DHT.h>
#define Type DHT11
int sensePin=13;
DHT HT(sensePin,Type);
const int rs = 12, E = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd (rs,E,d4,d5,d6,d7);
int wait=1000;
int humidity;
int tempC;

void setup() {
Serial.begin(9600);
HT.begin();
lcd.begin(16,2);
}

void loop() {
humidity=HT.readHumidity();
tempC= HT.readTemperature();
lcd.setCursor(0,0);
lcd.print("Humidity: ");
lcd.print(humidity);

lcd.setCursor(0,1);
lcd.print("Temperature:");
lcd.print(tempC);
lcd.print(" C ");

}
