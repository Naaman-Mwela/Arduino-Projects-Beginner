int led = 3;//pulse widith modulation pin
int read = A3;
int potval;
float ledval;
int wait = 250;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(read,INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
potval = analogRead(read);
ledval=(255./1023.)*potval;
analogWrite(led,ledval);
Serial.println(ledval);
delay(wait);
}
