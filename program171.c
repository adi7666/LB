#include<stdio.h>

int CountVowels(char *str, char ch)
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

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);       
    
    iRet = CountVowels(Arr, 'm');
    
    printf("Number of m in this is : %d\n", iRet);    
    
    return 0;
}