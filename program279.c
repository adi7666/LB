// Input : 5
// output: 1  +  2   +  3  +   4  +  5  = 15

#include<stdio.h>

int AdditionR(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;
    if(iCnt <= iNo)
    {
        iSum = iSum + iCnt;
        iCnt++;
        AdditionR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the No.    : \n");
    scanf("%d", &iValue);
    
    iRet = AdditionR(iValue);

    printf(" Addition is : %d\n",iRet);

    return 0;
}