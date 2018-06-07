#include <16f628a.h>
#fuses XT, NOWDT, NOLVP, NOPROTECT
#use delay(clock = 4M)

void main() {
    set_tris_b(0x00);
    while(1) {
        output_b(0b01101111);
        delay_ms(200);
        output_b(0b01111111);
        delay_ms(200);
        output_b(0b00000111);
        delay_ms(200);
        output_b(0b01111101);
        delay_ms(200);
        output_b(0b01101101);
        delay_ms(200);
        output_b(0b01100110);
        delay_ms(200);
        output_b(0b01001111);
        delay_ms(200);
        output_b(0b01011011);
        delay_ms(200);
        output_b(0b00000110);
        delay_ms(200);
        output_b(0b00111111);
        delay_ms(200);
    }
}