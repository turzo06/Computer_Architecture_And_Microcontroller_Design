// Lcd pinout settings
sbit LCD_RS at RB0_bit;
sbit LCD_EN at RB1_bit;
sbit LCD_D4 at RB2_bit;
sbit LCD_D5 at RB3_bit;
sbit LCD_D6 at RB4_bit;
sbit LCD_D7 at RB5_bit;

// Pin direction
sbit LCD_RS_Direction at TRISB0_bit;
sbit LCD_EN_Direction at TRISB1_bit;
sbit LCD_D4_Direction at TRISB2_bit;
sbit LCD_D5_Direction at TRISB3_bit;
sbit LCD_D6_Direction at TRISB4_bit;
sbit LCD_D7_Direction at TRISB5_bit;

int result;
float volt,temp;
char display[16]="";
void main() {
trisb=0x00;
trisa=0xff;
portb=0x00;
adc_init();
lcd_init();
lcd_cmd(_LCD_CLEAR);
lcd_cmd(_LCD_CURSOR_OFF);
while(1){
             result=adc_Read(0);
             volt=result*4.88;
             temp=volt/10;
             lcd_out(1,1,"Temp=");
             FloatToStr(temp,display);
             lcd_out(1,6,display);
             lcd_chr(1,15,223);
             lcd_chr(1,16,"C");
         }

             }