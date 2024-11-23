    #include<stdio.h>

int main ()
{
    char Arr[30];
    char *ptr = Arr;

    printf("Enter the name : \n");
    scanf("%[^'\n']s",Arr);        // Accept till First Space only

    while (*ptr != '\0'){
    printf("%c\n", *ptr);
    ptr++;

    }
    
    return 0;
}