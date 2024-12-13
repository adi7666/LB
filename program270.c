// *    *     *     *


#include<stdio.h>

void DisplayI(int iNo)
{
    
    int i = 0;
    while(i<= iNo)
    {
        printf("*\n");
        i++;
    }


}

int main(){
    int iValue = 0;
    printf("Enter the frequency : \n");
    scanf("%d", &iValue);
    DisplayI(iValue);

    return 0;
}