#include<stdio.h>

int CountVowels(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == 'm'){
        
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
    
    iRet = CountVowels(Arr);
    
    printf("Number of vowels is : %d\n", iRet);    
    
    return 0;
}