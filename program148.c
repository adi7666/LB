    #include<stdio.h>

int main ()
{
    char Arr[30];
    char *ptr = Arr;

    printf("Enter the name : \n");
    scanf("%[^'\n']s",Arr);        // Accept till First Space only

    printf("%c\n", *ptr);
    ptr++;

    printf("%c\n", *ptr);
    ptr++;    

    printf("%c\n", *ptr);
    ptr++;

    printf("%c\n", *ptr);
    ptr++;
    
    printf("%c\n", *ptr);
    ptr++;


    return 0;
}