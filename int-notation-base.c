/******************************************************************************

Declare and print integer numbers using different base (decimal, ocal, hexadecimal)

int decNumber = 1234;   // decimal, general notation
int octNumber = 01234;  // octal, starting with zero
int hexNumber = 0x1234; // hexadecimal, starting with 0x, [0-9] and [a-f]/[A-F]
 
*******************************************************************************/

#include <stdio.h>
int main(void)
{
    int decNumber = 1234;
    int octNumber = 01234;
    int hexNumber = 0x1234;
    printf("decNumber 1234   : dec=%d, oct=%5o, hex=%3x\n", decNumber, decNumber, decNumber);
    printf("octNumber 01234  : dec=%4d, oct=%5o, hex=%3X\n", octNumber, octNumber, octNumber);
    printf("hexNumber 0x1234 : dec=%d, oct=%5o, hex=%x\n", hexNumber, hexNumber, hexNumber);
    return 0;
}
