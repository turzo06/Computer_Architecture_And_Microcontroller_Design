void main(){
short duty=0;
 trisb=0x00;
 trisd=0xff;
 portb.f0=1;
 portb.f1=0;
 PWM1_Init(1000);
 PWM1_Start();
 PWM1_Set_Duty(duty);
 while(1){
 if(RD0_bit && duty<255){
 delay_ms(100);
 if(RD0_bit &&  duty<255){
 duty=duty+10;
 PWM1_Set_Duty(duty);
 }
 }
 if(RD1_bit && duty>0){
 delay_ms(100);
 if(RD0_bit &&  duty>0){
 duty=duty-10;
 PWM1_Set_Duty(duty);
 }
 }
 }
}
