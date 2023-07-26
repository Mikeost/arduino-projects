/*
    Super fast output switch (4 MHz)
*/ 

void setup() {
    pinMode(13, OUTPUT);
}

void loop() {
    while(1) {
        PORTB = 0x4;
        PORTB =~0x4;
    }
}
