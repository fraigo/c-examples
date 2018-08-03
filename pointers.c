#include <stdio.h>

int main()
{
    printf("Pointers demo\n");

    // Integer number , without initialization
    int number1;
    // Not initialized variables could have a unexpected initial value (sometimes could be 0)
    printf("Number1 value is %d\n",number1);
    
    // Integer number, with initialization
    int number2 = 1234;
    printf("Number2 value is %d\n",number2);
    
    // Pointer to an integer, with inmediate initialization (& : memory address of)
    int *pNumber1 = &number1;
    
    // Pointer to a number with defered initialization
    int *pNumber2;
    pNumber2 = &number2;
    
    // Access pointer referenced memory address (without *)
    printf("pNumber1 address to %d\n",pNumber1);
    printf("pNumber2 address to %d\n",pNumber2);
    
    // Access pointer redefenced values
    printf("pNumber1 value is %d\n",*pNumber1);
    printf("pNumber2 value is %d\n",*pNumber2);
    
    // Assign value using pointer address
    *pNumber1 = 5678;
    printf("Number1 value is %d\n",number1);
    // Is the same as assigning directly to pointed variable 
    number1 = 4567;
    printf("Number1 value is %d\n",number1);
    
    

    return 0;
}
