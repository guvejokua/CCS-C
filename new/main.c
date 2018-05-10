#include <16f877a.h>

#fuses XT,NOWDT,NOPROTECT,NOBROWNOUT,NOLVP,NOPUT,NOWRT,NODEBUG,NOCPD
#use delay(clock=4M)

void main() {
   set_tris_b(0x00);
   int i = 0;
   int led[8] = {pin_b0, pin_b1, pin_b2, pin_b3, pin_b4, pin_b5, pin_b6, pin_b7};
   while(1) {
      for(i = 0; i < 8; i++) {
         output_high(led[i]);
         delay_ms(1000);
         output_low(led[i]);
         delay_ms(1000);
      }  
   }
}

