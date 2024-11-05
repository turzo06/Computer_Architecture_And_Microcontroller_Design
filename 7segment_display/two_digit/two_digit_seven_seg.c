char cc[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
int i = 0,j;

void led(int val) {
    portc = 0b01;
    portb = cc[val % 10];
    delay_ms(5);

    portc = 0b10;
    portb = cc[val / 10];
    delay_ms(5);
    //total delay 10 ms
}

void main() {
    trisb = 0x00;
    portb = 0x00;
    trisc = 0x00;
    portc = 0x00;
    while(1) {
             for(j=0;j<100;j++) led(i);// total delay 10*1000=1sec
             i++;
            if(i > 99) i = 0;
    }
}