           char array[]={0x3F,0x06,0x5B, 0x4F,0x66,0x6D,0x7D ,0x07,0x7F,0x6F};
void main() {
int i=-1;
                              trisb=0x00;
                              portb=0x00;
                              trisc.f1=1;
                              trisc.f2=1;
                              while(1){
                              if(portc.f1==0xff && i<9){
                                        while(portc.f1) delay_ms(10);
                                        i++;
                                        portb=array[i];
                              }
                               if(portc.f2==0xff && i>0){
                                        while(portc.f2) delay_ms(10);
                                        i--;
                                        portb=array[i];
                              }
                              }
}