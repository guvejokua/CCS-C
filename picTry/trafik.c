#include <16f877a.h>

#fuses XT,NOWDT,NOPROTECT,NOBROWNOUT,NOLVP,NOPUT,NOWRT,NODEBUG,NOCPD
#use delay(clock=4M)
void yoldurum(int mod, int yol1pin[], int yol2pin[]);
void main()
   {
   set_tris_b(0x00);
   int yolapin[3] = {pin_b0, pin_b1, pin_b2};
   int yolbpin[3] = {pin_b3, pin_b4, pin_b5};
   yoldurum(1, yolapin, yolbpin);
   while(1) {
   yoldurum(1, yolapin, yolbpin);
   delay_ms(1000);
   yoldurum(2, yolapin, yolbpin);
   delay_ms(250);
   yoldurum(1, yolapin, yolbpin);
   delay_ms(250);
   yoldurum(2, yolapin, yolbpin);
   delay_ms(250);
   yoldurum(1, yolapin, yolbpin);
   delay_ms(250);
   yoldurum(2, yolapin, yolbpin);
   delay_ms(250);
   yoldurum(3, yolapin, yolbpin);
   delay_ms(1000);
   yoldurum(4, yolapin, yolbpin);
   delay_ms(500);
   yoldurum(5, yolapin, yolbpin);
   delay_ms(1000);
   yoldurum(6, yolapin, yolbpin);
   yoldurum(1, yolbpin, yolapin);         //#
   delay_ms(1000);
   yoldurum(2, yolbpin, yolapin);
   delay_ms(250);
   yoldurum(1, yolbpin, yolapin);
   delay_ms(250);
   yoldurum(2, yolbpin, yolapin);
   delay_ms(250);
   yoldurum(1, yolbpin, yolapin);
   delay_ms(250);
   yoldurum(2, yolbpin, yolapin);
   delay_ms(250);
   yoldurum(1, yolbpin, yolapin);
   delay_ms(250);
   yoldurum(2, yolbpin, yolapin);
   delay_ms(250);
   yoldurum(3, yolbpin, yolapin);
   delay_ms(1000);
   yoldurum(4, yolbpin, yolapin);
   delay_ms(500);
   yoldurum(5, yolbpin, yolapin);
   delay_ms(1000);
   yoldurum(6, yolbpin, yolapin);
   }
   }
   
void yoldurum(int mod, int yol1pin[], int yol2pin[]) {
   int yolak = yol1pin[0];
   int yolas = yol1pin[1];
   int yolay = yol1pin[2];
   int yolbk = yol2pin[0];
   int yolbs = yol2pin[1];
   int yolby = yol2pin[2];
   if(mod == 1) {
   output_low(yolak);
   output_low(yolas);
   output_high(yolay);
   output_high(yolbk);
   output_low(yolbs);
   output_low(yolby);
   }
   else if(mod == 2) {
   output_low(yolak);
   output_low(yolas);
   output_low(yolay);
   output_high(yolbk);
   output_low(yolbs);
   output_low(yolby);
   }
   else if(mod == 3) {
   output_low(yolak);
   output_high(yolas);
   output_low(yolay);
   output_high(yolbk);
   output_low(yolbs);
   output_low(yolby);
   }
   else if(mod == 4) {
   output_high(yolak);
   output_low(yolas);
   output_low(yolay);
   output_high(yolbk);
   output_low(yolbs);
   output_low(yolby);
   }
   else if(mod == 5) {
   output_high(yolak);
   output_low(yolas);
   output_low(yolay);
   output_high(yolbk);
   output_high(yolbs);
   output_low(yolby);
   }
   else if(mod == 6) {
   output_high(yolak);
   output_low(yolas);
   output_low(yolay);
   output_low(yolbk);
   output_low(yolbs);
   output_high(yolby);
   }
}

   
