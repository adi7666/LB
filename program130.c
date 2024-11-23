//Input : 5
// Output : a   1   b   2   c   3   d   4   e   5

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;   
    char ch = '\0';
    for (iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t%d\t", ch,iCnt);
        // ch++;
    }
    printf("\n");
}

int main()
{
    int iValue1 =0, iValue2 = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue1 );
    Display(iValue1);
    return 0;
}