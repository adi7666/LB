#include<stdio.h>
void displayTimeTable(int iStd)
{
    switch(istd){
        case 8:
        printf("yoour exsm is at 9:30\n");
        case 9:
        printf("your exam is at 10:30");
        case 10:
        printf("your exam is at 11:30");
    }
}
int main(){
    int iValue =0;
    
    printf("Please enter the Standard : \n");
    scanf("%d", &iValue);
    
    displayTimeTable(iValue);
    return 0;
}