#include<stdio.h>

int CountSmallLetter(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z'){
        
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
    
    iRet = CountSmallLetter(Arr);
    
    printf("Number of small no are : %d\n", iRet);    
    
    return 0;
}