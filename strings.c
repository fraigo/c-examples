/******************************************************************************

String examples

*******************************************************************************/

#include <stdio.h>

void string_initialization(){
    
    char *text1 = "Text1";
    printf("%s\n",text1);
    
    char text2[] = "Text2";
    printf("%s\n",text2);
    
    char text3[20] = "Text3";
    printf("%s\n",text3);
    
    char text4[10] = "Text4Example";
    printf("%s\n",text4);
    
    char text5[] = { 'T', 'e', 'x', 't', '5'};
    printf("%s\n",text5);
    
    char text6[] = { 'T', 'e', 'x', 't', '6' , 'e', 'x', '\0', 'a', 'm', 'p', 'l', 'e'};
    printf("%s\n",text6);
    
    char text7[8] = { 'T', 'e', 'x', 't', '7'};
    printf("%s\n",text7);
    
   
}

int main()
{
   
    string_initialization();

    return 0;
}
