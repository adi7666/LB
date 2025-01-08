#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    
    char Name[30];
    char Arr[20] = {'\0'};  
    int fd = 0;
    
    printf("Please enter the file name that you want to open\n");
    scanf("%[^\n']s'",Name);

    fd = open(Name, O_RDWR);
    
    lseek(fd, -10,SEEK_END);
    read(fd , Arr);
    printf("data from file is : %s\n",Arr);

    close(fd);
    return 0;
}


/*
    SEEK_SET -> FROM START
    SEEK_CUR -> FROM WHERE ER ARE NOW
    SEEK_END -> START FORM THE END
*/