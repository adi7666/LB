// Input : 5
// output: 1    2     3     4       5

#include<stdio.h>

void DisplayR(int iNo)
{
    int iCnt = 1;
    while(iCnt<= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
        // DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the No.    : \n");
    scanf("%d", &iValue);
    
    DisplayR(iValue);

    printf("End of main\n");

    return 0;
}