#include<stdio.h>

int CountSpace(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ' '){
        
        iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main ()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);        // Accept till First Space only
    
    iRet = CountSpace(Arr);
    
    printf("Number of String is  : %d\n", iRet);    
    
    return 0;
}