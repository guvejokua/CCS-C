#include <16F628A.h>

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=16MHz)



void main()
{
   set_tris_b(0b00001000);
   output_b(0x00);
   int butonDurum;
   while(1)
   {
      butonDurum = input(pin_b3);
      if(butonDurum == 0) {
         while(butonDurum != 0) ; 
         output_high(pin_b7);
      }
      else {
         output_low(pin_b7);
      }
   }
}

