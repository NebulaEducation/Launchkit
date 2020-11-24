/*
LED Light Science
Nebula Education
by Nolan Tremelling 12 October 2020
*/

int red = 4;  //red LED in digital pin 1
int blue = 3; //blue LED in digital pin 2
int yellow = 2; //yellow LED in digital pin 3

void setup() {
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(yellow, OUTPUT);

}

void loop() {
    digitalWrite(red, HIGH);
    delay(2000);
    digitalWrite(blue, HIGH);
    delay(2000);
    digitalWrite(yellow, HIGH);
    delay(2000);
}
