int led = 13;

void setup() {
    pinMode(led, OUTPUT);
    pinMode(A0, INPUT);
}

void loop() {
    int d = analogRead(A0);
    digitalWrite(led, HIGH);
    delay(d);
    digitalWrite(led, LOW);
    delay(d);
}
