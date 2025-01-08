#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024
int main()
{
    
    char Name[30];
    char Arr[FILESIZE] = {'\0'};  
    int fd = 0;
    int iRet = 0, isum =0;
    printf("Please enter the file name that you want to open\n");
    scanf("%[^\n']s'",Name);

    fd = open(Name, O_RDONLY);
    iRet = read(fd,Arr, 10);
    printf("Please enter the file name that you want to open\n");
    while(( iRet = read(fd,Arr, FILESIZE)) != 0)
    {
        isum =isum + iRet;
        write(1,Arr,iRet);
    }
    printf("File size is %d\n", isum);
    close(fd);
    return 0;
}