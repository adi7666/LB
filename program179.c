#include<stdio.h>
#include<stdbool.h>
 
// This is right solution

void StrtoggleX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str -= 32;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            *str +=32;
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
    
   StrtoggleX(Arr);

   printf("String after CONVERTED into Capital letter is :s %s\n",Arr);
    
    return 0;
}