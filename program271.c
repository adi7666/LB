#include<stdio.h>

void DisplayR(int iNo)
{
    static int i = 1;
    if(i<= iNo)
    {
        printf("*\n");
        i++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d", &iValue);
    
    DisplayR(iValue);

    printf("End of main\n");

    return 0;
}