#include<stdio.h>

void display(int *ptr, int iSize)
{
    printf("Values of araay ARE: \n");
        int iCnt =0;
        for(iCnt =0; iCnt<iSize; iCnt++)
        {
            /* code */
            printf("%d\n", *ptr);
            ptr++;
        }
        
    
    
    // printf("%d\n", *ptr);
    // ptr++;
    // printf("%d\n", *ptr);
    // ptr++;
}

int main(){
    
    int Arr[4];
    int iCnt = 0;
    
     printf("Please enter tthe Values \n");
    
    for(int iCnt2 = 0; iCnt2 < 6; iCnt2++)
    {
        scanf("%d", &Arr[iCnt2]);
    }
    display(Arr,6);
    
    return 0;

}