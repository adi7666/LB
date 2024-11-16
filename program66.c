#include<stdio.h>

void display(int *ptr)
{
    printf("Values of araay ARE: \n");
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
    // ptr++;
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