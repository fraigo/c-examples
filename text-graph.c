#include <stdio.h>
#include <math.h>

#define MAXNUMBER 50

void printChars(int chars){
    int n;
    for(n = 0 ; n<chars ; n++){
        printf(" ");
    }
}

int main()
{
    double i, res;
    int chars;
    float number;
    printf("Graph factor:");
    scanf("%f", &number);
    printf("%f",number);
    for(i = 0; i< MAXNUMBER ; i+=number){
        res = cos(i);
        chars = (res+1)*50;
        printChars(chars);
        printf("%.5f %d\n", res, chars);
    }
    return 0;
}

