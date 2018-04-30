        LIST P=16F84
        INCLUDE   "P16F84.INC"
SAYAC   EQU       h'0C'
        CLRF      PORT8
        BSF       STATUS,5
        CLRF      TRISB
        MOVLW     h'FF'
        MOVWF     TRISA
        BCF       STATUS,5
BASLA
        MOVLW     D'10'
        MOVWF     SAYAC
TEST
        BTFSC     PORTA,1
        GOTO      TEST
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        DECFSZ    SAYAC,F
        GOTO      TEST
        BSF       PORTB,0
        END
