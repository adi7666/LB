#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt =1; iCnt<= iNo; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}
int main(){
    int iValue = 10;
    Display(iValue); 
    return 0;
}