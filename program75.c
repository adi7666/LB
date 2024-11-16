#include<stdio.h>
#include<stdlib.h>
void function(int Arr[], int iSize)
{
    //Logic

}

int main(){
    int iLength = 0;
    int *ptr = NULL;

    printf("Enter the number of element : \n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements \n");
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    printf("Elements are in  the array: \n");
      for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }
    
    function(ptr, iLength);
    free(ptr);
    
    return 0;

}