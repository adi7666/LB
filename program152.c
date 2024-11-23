    #include<stdio.h>

int countsmall(char *ptr)
{
    int iCount = 0;
    while (*ptr != '\0'){
    printf("%c\n", *ptr);
    if(*ptr >= 97 && *ptr <= 122){iCount++;}
    ptr++;
    
    
    }
    return iCount;
}
int main ()
{
    int iRet = 0;
    char Arr[30];
    char *ptr = Arr;

    printf("Enter the name : \n");
    scanf("%[^'\n']s",Arr);        // Accept till First Space only

    iRet = countsmall(Arr);

    printf("Count of Small Letters : %d\n", iRet);
    
    return 0;
}