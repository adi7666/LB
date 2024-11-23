#include<stdio.h>
#include<string.h>

int main ()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);        // Accept till First Space only

    
    iRet = strlen(Arr);
    
    printf("Length of String is  : %d\n", iRet);    
    
    return 0;
}