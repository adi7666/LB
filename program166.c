#include<stdio.h>

int Count(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == 'a'  || *str == 'A' || *str == 'B' || *str == 'b'){
        
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
    
    iRet = Count(Arr);
    
    printf("Number is : %d\n", iRet);    
    
    return 0;
}