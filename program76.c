#include<stdio.h>
#include<stdlib.h>
int Addition(int Arr[], int iSize)
{
    //Logic
    int iSum =0;
    for(int iCnt =0; iCnt<iSize; iCnt++){
        iSum = iSum + iCnt;
        
    }
    return iSum;

}

int main(){
    int iLength = 0, iRet =0;;
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
    
    iRet = Addition(ptr, iLength);\
    printf("Addition is :%d\n",iRet);
    free(ptr);
    
    return 0;

}