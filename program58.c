#include<stdio.h>
int CountDigits(int iNo)
{
    if(iNo < 0 )
    {
        iNo = -iNo;
    }
    int iCount =0;
    int iDigits = 0;
    while(iNo > 0)
    {
        iDigits = iNo % 10;
        if(iDigits %2 !=0){
        iCount++;
        }
        iNo = iNo /10;
        
    }
    return iCount;
}
int main()
{
    int iValue = 0, iRet =0;
    printf("Enter The Number \n");
    scanf("%d",&iValue);
    iRet =CountDigits(iValue);
    printf("Enter the Odd Digits are : %d\n", iRet);
    return 0;
}