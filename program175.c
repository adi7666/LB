#include<stdio.h>
#include<stdbool.h>
 
void Update(char *str)
{
    while(*str != '\0')
    {
        if(*str =='a')
        {
            *str = 'd';
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
    
   Update(Arr);

   printf("String after updation is %s\n",Arr);
    
    return 0;
}