#include<stdio.h>

int Count(char *str, char ch)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ch){
        
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
    char cValue = '\0';

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);       
    
    printf("Enter the Characterr you want : \n");
    scanf("%c", &cValue);
    iRet = Count(Arr, cValue);
    
    printf("Number of m in this is : %d\n", iRet);    
    
    return 0;
}