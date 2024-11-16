#include<stdio.h>
void Display(int iNo){
    int iCnt =0;
    for(iCnt =1; iCnt <=iNo; iCnt++){
        printf("%d", iCnt);
    }
}
int main(){
    
    int iFrequency=0;
    printf("Enter the Frequency : \n");
    scanf("%d \n", &iFrequency);
    Display(iFrequency);
    return 0;
}