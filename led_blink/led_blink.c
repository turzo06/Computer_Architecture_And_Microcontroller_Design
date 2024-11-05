void main() {
           TRISB=0x00;      //port B as output  (all the 8 pins)
           PORTB=0x00;                   //initialization state (off/low)
           while(1){
                        PORTB=0xff;    //making portB high
                        delay_ms(1000);   // 1 sec delay
                        PORTB=0x00;  //making portB low
                        delay_ms(1000);
           }
}