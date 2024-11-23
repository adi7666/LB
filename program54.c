#include<stdio.h>
void DisplayDigits(int iNo)
{
    if(iNo < 0 )    //updater
    {
        iNo = -iNo;
    }
    int iDigits = 0;
    while(iNo > 0)
    {
        iDigits = iNo % 10;
        printf("%d", iDigits);
        iNo = iNo /10;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter The Number \n");
    scanf("%d",&iValue);
    DisplayDigits(iValue);
    return 0;
}