#include<stdio.h>
#include<stdbool.h>
 
void StrlwrX(char *str)
{
    while(*str !='\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str += 32;
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
    
   StrlwrX(Arr);

   printf("String after CONVERTED into small letter is %s\n",Arr);
    
    return 0;
}