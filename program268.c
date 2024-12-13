// *    *     *     *


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

    DisplayR();

    return 0;
}