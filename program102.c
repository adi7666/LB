#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt =iNo; iCnt >= 1; iCnt--)
    {
        printf("\n%d\n", iCnt);
    }
    // printf("\n");
}
int main()
{
    int iValue =0;
    printf("Enter the no \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}