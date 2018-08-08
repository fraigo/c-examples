/******************************************************************************

C integer limits
 
*******************************************************************************/

#include <stdio.h>
#include <limits.h>
int main(void)
{
    unsigned long big = ULONG_MAX;
    printf("minimum int           = %i\n", INT_MIN);
    printf("maximum int           = %i\n", INT_MAX);
    printf("maximum unsigned      = %u\n", UINT_MAX);
    printf("maximum long int      = %li\n", LONG_MAX);
    printf("maximum unsigned long = %lu\n", big);
    return 0;
}
