#include <main.h>
#fuses XT,NOWDT,NOPROTECT,NOBROWNOUT,NOLVP,NOPUT,NOWRT,NODEBUG,NOCPD
#use delay(clock=16M)
void main()
{
   set_tris_b(0x00);
   while(TRUE)
   {
      output_high(pin_b0);
      delay_ms(1000);
      output_low(pin_b0);
      delay_ms(1000);
      output_high(pin_b1);
      delay_ms(1000);
      output_low(pin_b1);
      delay_ms(1000);
   }

}
