#include<stdio.h>

void display (char str[])
{
    printf("Enter String is  : %s\n", str);

    for(int i = 0; str[i] != '\0'; i++)
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

    display(Arr);       //Display(100)
    
    return 0;
}