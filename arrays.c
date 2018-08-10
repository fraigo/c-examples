/******************************************************************************

Array examples

*******************************************************************************/

#include <stdio.h>

void array_info(int* array, int size){
    int i;
    printf("Array info:\n");
    for(i=0; i<size; i++){
        printf("Array element [%d] : %d\n",i,array[i]);
    }    
    printf("\n");
}

void array_initializations(){
     // Array without initialization, values could have any value
    int numbers0[5];
    array_info(numbers0,5);
    
    // Array with empty initialization, each value is filled with 0
    int numbers1[5] = { };
    array_info(numbers1,5);
    
    // Array with initialization and size, each value is initialized with specific values
    int numbers2[3] = { 1, 2, 3};
    array_info(numbers2,3);
    
    // Array with initialization and bigger size, 
    // only the first N elements are initialized with specific values, the rest are filled with 0
    int numbers3[6] = { 1, 2, 3};
    array_info(numbers3,6);
}

int main()
{
   
    array_initializations();

    return 0;
}
