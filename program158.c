#include<stdio.h>

void display (char *str)
{
    printf("Enter String is  : %s\n", str);

    while(*str != 0)
    {
        printf("%c\n", *str);
        str++;
    }
}
int main ()
{
    char Arr[30];
    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);        // Accept till First Space only

    display(Arr);
    
    return 0;
}