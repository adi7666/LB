#include<stdio.h>
#include<stdbool.h>
 
void StruprX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str -= 32;
        }
        str++;
    }
}

int main ()
{
    char Arr[30];
    bool bRet = false;
    char cValue = '\0';

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);       
    
   StruprX(Arr);

   printf("String after CONVERTED into Capital letter is %s\n",Arr);
    
    return 0;
}