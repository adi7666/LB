// Input : 5
// output: 1  +  2   +  3  +   4  +  5  = 15

#include<stdio.h>

int CountDigitsI(int iNo)
{
    int iCount = 0;
    
    while(iNo != 0)
    {
        iCount++;
        iNo  = iNo/10;
       
        // AdditionR(iNo);
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the No.    : \n");
    scanf("%d", &iValue);
    
    iRet = CountDigitsI(iValue);

    printf(" Digits is : %d\n",iRet);

    return 0;
}