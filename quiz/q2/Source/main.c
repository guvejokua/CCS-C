#include <16f628a.h>
#fuses XT, NOWDT, NOLVP, NOPROTECT
#use delay(clock = 4M)

void main() {
    int sayac = 0;
    for(sayac = 0; sayac < 100; sayac++) {
        /*
        output_high(pin_b0);
        delay_ms(250);
        output_low(pin_b0);
        delay_ms(250);
        */
        output_toggle(pin_b0);
        delay_ms(20);
    }
    sleep();
}
