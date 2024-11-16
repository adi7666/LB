#include<stdio.h>

void display(int *ptr)
{
    printf("Values of araay ARE: \n");
    printf("%d\n", ptr[0]); //(*ptr +0)
    printf("%d\n", ptr[1]); //*(ptr + 1)
    printf("%d\n", ptr[2]); //*
    printf("%d\n", ptr[3]);
    
    
}

int main(){
    
    int Arr[4];
    int iCnt = 0;
    
     printf("Please enter tthe Values \n");
    
    for(int iCnt2 = 0; iCnt2 <= 3; iCnt2++)
    {
        scanf("%d", &Arr[iCnt2]);
    }
    display(Arr);
    
    return 0;

}