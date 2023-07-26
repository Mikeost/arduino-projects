void setup() {
    pinMode(13, OUTPUT); // PWM pin
    pinMode(A0, INPUT); // potentiometer
}

void loop() {
    int inVal = analogRead(A0);
    inVal = map(inVal, 0, 1023, 2, 254); // 1 - 99 duty percent
    analogWrite(13, inVal);
    delay(30);
}
