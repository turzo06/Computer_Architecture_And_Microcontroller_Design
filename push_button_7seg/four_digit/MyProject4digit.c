char cc[]={0x3F,0x06,0x5B, 0x4F,0x66,0x6D,0x7D ,0x07,0x7F,0x6F};
int i=0;
void led(int val){
     portc=0b0111;
     portb=cc[val%10];
     delay_ms(10);

     portc=0b1011;
     portb=cc[(val/10)%10];
     delay_ms(10);

     portc=0b1101;
     portb=cc[(val/100)%10];
     delay_ms(10);

     portc=0b1110;
     portb=cc[val/1000];
     delay_ms(10);
}
void main() {
                              trisb=0x00;
                              portb=0x00;

                              trisc=0x00;
                              portc=0x00;
                              trisd=0xff;
                              while(1){
                                      if(portd.f0==1){
                                                      while(portd.f0)delay_ms(5);
                                                      i++;
                                                      if(i>9999)i=0;
                                      }
                                      if(portd.f1==1){
                                                      while(portd.f1)delay_ms(5);
                                                      i--;
                                                      if(i<0)i=9999;
                                      }
                                      led(i);
                              }
}