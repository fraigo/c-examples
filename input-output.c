/******************************************************************************

C input / output example

scanf( format, var1 [, var2, ...]) 
 Asks for data. 
 Each var must be a reference 
 Use &var for static variables
 For strings, & is not necessary
 Example: scanf("%d", &number)

printf( format [, var1, var2, ...])
 Prints data
 Example: printf("Number was %d", number);
 
*******************************************************************************/

#include <stdio.h>

int main(void)
{
    
    char name[256];
    printf("Enter your name: ");
    scanf("%s", name);
    // scanf("%s", *name[0]); // also works with the same result
    printf("Hello %s! How are you? \n\n", name);
    
    
    
    int a, b;
    printf("Enter two numbers [a b]: ");
    scanf("%i %i", &a, &b);
    printf("%i + %i = %i\n", a, b, a + b);
    printf("%i - %i = %i\n", a, b, a - b);
    printf("%i * %i = %i\n", a, b, a * b);
    
    
    return 0;
}
