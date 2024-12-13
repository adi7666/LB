#include<stdio.h>

int CountDigitsR(int iNo)
{
    int iCount = 0;
    
    while(iNo != 0)
    {
        iCount++;
        iNo  = iNo/10;
       
        CountDigitsR(iNo);
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the No.    : \n");
    scanf("%d", &iValue);
    
    iRet = CountDigitsR(iValue);

    printf(" Digits is : %d\n",iRet);

    return 0;
}