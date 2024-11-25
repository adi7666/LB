#include<stdio.h>

int strlenX(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        str++;
        iCnt++;
    }
    return iCnt;
}

int main ()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);        // Accept till First Space only
    
    iRet = strlenX(Arr);
    
    printf("Length of String is  :  %d\n", iRet);    
    
    return 0;
}