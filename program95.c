#include<stdio.h>
#include<stdlib.h>

/*
Step 1 : Accept the number of element from user
step 2 : ALlocate that memory dynamically
step 3 Acccept the values and store into the dynamic memory
step 4 perform the operation(Logic)
step 5 : Dellocate that memory

*/
int Minimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin =0;
    iMin = Arr[0];
    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        if( Arr[iCnt] < iMin ){
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet =0;
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
    iRet = Minimum(ptr,iLength);
    printf("Maximum is :%d\n", iRet);


    // step 5 : Dellocate that memory
    free(ptr);
    return 0;
}
