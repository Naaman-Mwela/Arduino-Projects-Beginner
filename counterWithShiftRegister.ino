//COUNTER

int LatchPin=11;
int ClockPin =9;
int DataPin=8;
byte Leds=0x00;
int dt =500;

void setup() {
Serial.begin(9600);
pinMode(DataPin,OUTPUT);
pinMode(ClockPin,OUTPUT);
pinMode(LatchPin,OUTPUT);
}

void loop() {
for(Leds;Leds<=0xff;Leds+=1){
Serial.println(Leds,BIN);
delay(dt);
digitalWrite(LatchPin,LOW);
shiftOut(DataPin,ClockPin,LSBFIRST,Leds);//send data out through pin 12 on register to 14,clock to synchronise,3rd part order n which you send bits,data packet you sendng?
digitalWrite(LatchPin,HIGH);
}




}
