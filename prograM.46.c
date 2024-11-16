#include<stdio.h>
#include<stdbool.h>
bool CheckDivisible(int iNo)
{
    // int iResult = 0;
    // iResult = iNo % 3;
    if((iNo%3) ==0 && (iNo%5) == 0){
        return  true;
    }
    else
    {
        return false;
    }
}

int main(){
    int iValue =0;
    bool bFlag = false;
    printf("Enter the nyuumber\n");
    scanf("%d\n", &iValue);
    bFlag = CheckDivisible(iValue);

    if(bFlag == true)
    {
        printf("%d is Divisible by 3 And 5\n", iValue);
    }
    else
    {
        printf("%d is not Divisible by 3 or 5\n", iValue);
    }
    return 0;
}

