#include<stdio.h>
void DisplayDigits(int iNo)
{
    int iDigits = 0;
    while(iNo > 0)
    {
        iDigits = iNo % 10;
        printf("%d\n", iDigits);
        iNo = iNo /10;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter The Number \n");
    scanf("%d\n",&iValue);
    DisplayDigits(iValue);
    return 0;
}