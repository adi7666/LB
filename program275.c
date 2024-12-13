// Input : 5
// output: 1    2     3     4       5

#include<stdio.h>

void DisplayR(int iNo)
{
    // int iCnt = 1;
    if(iNo>=1)
    {
        printf("%d\t",iNo);
        iNo--;
        DisplayR(iNo);
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the No.    : \n");
    scanf("%d", &iValue);
    
    DisplayR(iValue);

    printf("\nEnd of main");

    return 0;
}