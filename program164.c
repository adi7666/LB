#include<stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z'){
        
        iCount++;
        }
        str++;
    }
    return iCount;
}

int main ()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);        // Accept till First Space only
    
    iRet = CountCapital(Arr);
    
    printf("Number of Capital are : %d\n", iRet);    
    
    return 0;
}