   void servo0(){
   //0 degree move
           portb.f0=1;
             delay_us(1000);
             portb.f0=0;
             delay_us(19000);

   }
     void servo90(){
     //90 degree move
           portb.f0=1;
             delay_us(1500);
             portb.f0=0;
             delay_us(18500);

   }
     void servo180(){
     //180 degree move
           portb.f0=0xff;
             delay_us(2000);
             portb.f0=0x00;
             delay_us(18000);

   }
void main() {
             TRISB=0x00;
             PORTB=0Xff;
             while(1){
             
             servo0();
             delay_ms(1000);
             servo90();
             delay_ms(1000);
             servo180();
             delay_ms(1000);
             }
             
}