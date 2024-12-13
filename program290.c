#include<stdio.h>

int CountCapital(char *str)
{
    static int iCount =0;
    if(str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        
        str++;
        CountCapital(str);
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;
    printf("Enter String :  \n");
    scanf("%[^\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("String Length is : %d\n", iRet);

    return 0;
}