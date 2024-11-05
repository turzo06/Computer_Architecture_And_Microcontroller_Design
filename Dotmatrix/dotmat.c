unsigned int i,row;
const char T[8] ={0xFF, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18};
const char U[8] ={0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xFF, 0xFF};
const char Rr[8] = { 0x7C, 0x66, 0x66, 0x7C, 0x7C, 0x6C, 0x7E, 0x67 };
const char Zz[8] ={0xFF, 0xFF, 0x0E, 0x1C, 0x38, 0x70, 0xFF, 0xFF};
const char O[8] ={0x3C, 0x66, 0xC3, 0xC3, 0xC3, 0xC3, 0x66, 0x3C};


void display(const char *character) {
    for (row = 0; row < 8; row++) {
        PORTD = (1 << row);
        PORTB = character[row];
        Delay_ms(1);
    }
}

void main() {
    TRISD = 0x00;
    TRISB = 0x00;

    while (1) {
        for (i = 0; i < 100; i++) {
            display(T);
        }
        Delay_ms(50);

        for (i = 0; i < 100; i++) {
            display(U);
        }
        Delay_ms(50);
        for (i = 0; i < 100; i++) {
            display(Rr);
        }
        Delay_ms(50);

        for (i = 0; i < 100; i++) {
            display(Zz);
        }
        Delay_ms(50);
        for (i = 0; i < 100; i++) {
            display(O);
        }
        Delay_ms(50);
    }
}