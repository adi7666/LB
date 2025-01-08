#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    
    char Name[30];
    
    
    printf("Please enter the file name that you want to open\n");
    scanf("%[^\n']s'",Name);

    unlink(Name);
    return 0;
}