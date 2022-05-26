#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>

short randomNumber;
const short delay_time = 1000;

int main()
{
    // Set PINS [0, 1, 2, 3] to OUTPUT
    DDRB = 0b1111;

    while (true)
    {
        randomNumber = rand() % 6;

        switch (randomNumber)
        {
            case 0: // 1
                PORTB = 0b1;
                break;

            case 1: // 2
                PORTB = 0b10;
                break;

            case 2: // 3
                PORTB = 0b11;
                break;

            case 3: // 4
                PORTB = 0b110;
                break;

            case 4: // 5
                PORTB = 0b111;
                break;

            case 5: // 6
                PORTB = 0b1110;
                break;

            default:
                break;
        }

        _delay_ms(delay_time);
    }
}