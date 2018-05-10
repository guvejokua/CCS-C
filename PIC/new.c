#include <16f877a.h>

#fuses XT,NOWDT,NOPROTECT,NOBROWNOUT,NOLVP,NOPUT,NOWRT,NODEBUG,NOCPD
#use delay(clock=4M)
void main() {
      set_tris_b(0x00);
      while(1) {
      output_high(pin_b0);
      delay_ms(500);
      output_low(pin_b0);
      delay_ms(500);
      }
   }
 
