#include <main.h>
const int led[] = {pin_b0, pin_b1, pin_b2, pin_b3, pin_b4, pin_b5, pin_b6, pin_b7};
void main()
{
   int i;
   while(1) {
      for(i = 0; i < 8; i++) {
         output_high(led[i]);
         delay_ms(10);
         output_low(led[i]);
      }
      for(i = 7; i >= 0; i--) {
         output_high(led[i]);
         delay_ms(10);
         output_low(led[i]);
      }
   }

}
