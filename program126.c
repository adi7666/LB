#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t", ch);
        ch++;
    }
    printf("\n");
}

int main()
{
    int iValue1 =0, iValue2 = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue1 );
    return 0;
}