int led = 13; // digital pin

void setup() {
    pinMode(led, OUTPUT);
    pinMode(A0, INPUT); // potentiometer
}

void loop() {
    int d = analogRead(A0);
    digitalWrite(led, HIGH);
    delay(d);
    digitalWrite(led, LOW);
    delay(d);
}
