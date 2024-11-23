    #include<stdio.h>

void Display(char *ptr)
{
    while (*ptr != '\0'){
    printf("%c\n", *ptr);
    ptr++;
    }
}
int main ()
{
    char Arr[30];
    char *ptr = Arr;

    printf("Enter the name : \n");
    scanf("%[^'\n']s",Arr);        // Accept till First Space only

    Display(Arr);
    
    return 0;
}