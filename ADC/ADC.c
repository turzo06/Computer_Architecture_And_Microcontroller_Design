int ADCVal;
char x[4];
void main() {
UART1_Init(9600);
ADC_Init();
while(1){
   ADCval=ADC_Read(0);
   IntToStr(ADCval,x);
   UART1_Write_text("Analog Value= ");
   UART1_write_text(x);
   UART1_write(13);
   delay_ms(1000);
}
}