#include<stdio.h>
void displayTimeTable(int iStd)
{
    switch(istd){
        case 8:
        printf("yoour exsm is at 9:30\n");
        break;
        case 9:
        printf("your exam is at 10:30");
        break;
        case 10:
        printf("your exam is at 11:30");
        break;
    }
}
int main(){
    int iValue =0;
    
    printf("Please enter the Standard : \n");
    scanf("%d", &iValue);
    
    displayTimeTable(iValue);
    return 0;
}



// cP7Wv&!~cF