// input : 5 
// *    *   *   *   * 

#include<stdio.h>
void display(int iNo){
    int iCnt =0;
    for(iCnt = 1; iCnt<= iNo; iCnt++){
        printf("*\t"); 
    }
    printf("\n");
}
int main(){
    int iValue =0;
    printf("Enter the no : \n");
    scanf("%d", &iValue);
    display(iValue);
    
    return 0; 
}