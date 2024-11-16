#include<stdio.h>
int main(){
  
    int Arr[4]; 
    int iCnt =0;
    int iSum = 0;
    printf("Please enter tthe Values \n");
    // scanf("%d", &Arr[0]);
    // scanf("%d", &Arr[1]);
    // scanf("%d", &Arr[2]);
    // scanf("%d", &Arr[3]);
    for(int iCnt2 = 0; iCnt2 <= 3; iCnt2++){
        scanf("%d", &Arr[iCnt2]);
    }
    for(iCnt = 0; iCnt <4; iCnt++){
        iSum = iSum + Arr[iCnt];
    }
    printf("Addition of this is : %d\n",iSum);
    return 0;
}