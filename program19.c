#include<stdio.h>
void displayTimeTable(int iStd){
    if(iStd == 8){
        printf("Your Exam is 9:30");

    }else if(iStd == 9){
        printf("Your exam id at 10:30AM \n");
    }else if(iStd = 10){
        printf("Your Exam is At 11:30 \n");
    }
}
int main(){
    int iValue =0;
    printf("Please enter the Standard : \n");
    scanf("%d", &iValue);

    return 0;
}