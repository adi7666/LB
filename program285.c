#include<stdio.h>

int CountEvenDigitsR(int iNo)
{
    static int  iCount = 0;
    int iDigits = 0;

    if(iNo != 0)
    {
        iDigits =iNo % 10;
        if(iDigits % 2 == 0){
            iCount++;
        }
        
        iNo  = iNo/10;
       
        CountEvenDigitsR(iNo);
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the No.    : \n");
    scanf("%d", &iValue);
    
    iRet = CountEvenDigitsR(iValue);

    printf(" Digits is : %d\n",iRet);

    return 0;
}