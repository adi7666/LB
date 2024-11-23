#include<stdio.h>

/*
    8   9.30
    9   10.30
    10  11.30
*/

void displayTimeTable(int iStd){
    if(iStd == 8){
        printf("Your Exam is 9:30");
    }
    else if(iStd == 9)
    {
        printf("Your exam id at 10:30AM \n");
    }
    else if(iStd == 10)
    {
        printf("Your Exam is At 11:30 \n");
    }
    else{
        printf("Sorry we dont have the  information about your standard")
    }
}
int main(){
    int iValue =0;
    printf("Please enter the Standard : \n");
    scanf("%d", &iValue);
    displayTimeTable(iValue);
    return 0;
}