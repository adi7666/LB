    #include<stdio.h>

int count(char *ptr)
{
    int iCount = 0;
    while (*ptr != '\0'){
    printf("%c\n", *ptr);
    if(*ptr == 'a'){iCount++;}
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

    iRet = count(Arr);

    printf("Count of a  is : %d\n", iRet);
    
    return 0;
}