    #include<stdio.h>

int main ()
{
    char Arr[30];
    printf("Enter the name : \n");
    scanf("%[^'\n']s",Arr);        // Accept All the name with spaces
    printf("Your name is : %s\n",Arr);

    return 0;
}