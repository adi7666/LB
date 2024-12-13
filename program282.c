// Input : 5
// output: 1  +  2   +  3  +   4  +  5  = 15

#include<stdio.h>

int SumDigitsI(int iNo)
{
    int iSum = 0;
    
    while(iNo != 0)
    {
        iSum += (iNo % 10);
        iNo  = iNo/10;
       
        // AdditionR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the No.    : \n");
    scanf("%d", &iValue);
    
    iRet = SumDigitsI(iValue);

    printf(" Digits is : %d\n",iRet);

    return 0;
}