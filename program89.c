#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Search(int Arr[] , int iSize , int iNo){
    int iCnt = 0 , iFrequency= 0; 
    for(iCnt=0; iCnt < iSize; iCnt++){
        if(Arr[iCnt] == iNo){
            break;
        }
    }
    if(iCnt == iSize){
        return false;
    }
    else{
        return true;
    }
    
}
int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0;
    bool bRet = false;
    // Step 1 : Accept the number of element from user
    printf("ENter the number of elements\n");
    scanf("%d", &iLength);
    // step 2 : ALlocate that memory dynamically
    ptr = (int*)malloc(iLength *sizeof(int));
    // step 3 Acccept the values and store into the dynamic memory
    printf("Enter the element : \n");
    for(iCnt =0; iCnt <iLength; iCnt++){
        scanf("%d", &ptr[iCnt]);
    }

    // step 4 perform the operation(Logic)
    // fuction call
   printf("Enter the number that you want to search : \n");
   scanf("%d", &iValue);
    bRet = Search(ptr,iLength, iValue);
    // printf("Frequency is 10 : %d\n", iRet);
    if(bRet == true){
        printf("Element is present \n");
    }
    else{
        printf("Element is not present\n");
    }
    // step 5 : Dellocate that memory
    free(ptr);
    return 0;
}