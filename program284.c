#include<stdio.h>

int CountEvenDigitsI(int iNo)
{
    int iCount = 0;
    int iDigits = 0;

    while(iNo != 0)
    {

        if(iDigits % 2 == 0){
            iCount++;
        }
        
        iNo  = iNo/10;
       
        // CountEvenDigitsR(iNo);
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the No.    : \n");
    scanf("%d", &iValue);
    
    iRet = CountEvenDigitsI(iValue);

    printf(" Digits is : %d\n",iRet);

    return 0;
}