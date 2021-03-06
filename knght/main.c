#include <16f877a.h>

#fuses XT,NOWDT,NOPROTECT,NOBROWNOUT,NOLVP,NOPUT,NOWRT,NODEBUG,NOCPD
#use delay(clock=4M)

const int led[] = {pin_b0, pin_b1, pin_b2, pin_b3, pin_b4, pin_b5, pin_b6, pin_b7};
int i;
int j;
void main()
{
   for(j = 0; ;)
   {
      i = 0;
      for(i = 0; i < 8; i++) {
         output_high(led[i]);
         delay_ms(300);
         output_low(led[i]);
      }
      for(i = 7; i >= 0; i--) {
         output_high(led[i]);
         delay_ms(300);
         output_low(led[i]);
      }
   }
}
