#include<stdio.h>

void DisplayR()
{
   static int i = 1;
 
    if(i<= 4)
    {
        printf("*\n");
        i++;
        DisplayR();         //Recursive CALL
    }
}

int main(){

    printf("Inside Mian\n");
    DisplayR();
    printf("Endm of Function");
    return 0;
}