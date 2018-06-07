#include <16f628a.h>
#fuses XT, NOWDT, NOLVP, NOPROTECT
#use delay(clock = 4M)

void main() {
   byte k;
   set_tris_b(0x00);
   k = 0;
   while(1) {
       output_b(k);
       k++;
       if(k == 255) {
           output_b(k);
           k = 0;
       }
       delay_ms(100);
   }
}
