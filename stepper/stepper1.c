void main() {
trisb=0x00;
portb=0x00;
while(1){
portb=0b0011;
delay_ms(100);
portb=0b0110;
delay_ms(100);
portb=0b1100;
delay_ms(100);
portb=0b1001;
delay_ms(100);
}
}