/*
    START
        Accept the percentage from user
        If percentage are less than 40 then display FAIL
        And if it is greater than or equal to 40 then display PASS
    STOP
*/

#include<stdio.h>

void DisplayResult(float fpercentage){
    if(fpercentage<0.0f ||fpercentage >100.0f){
        printf("Invaild Percentage please enter the input in 0 to 100\n");
        return ;
    }
    if(fpercentage >=40.00f){
        printf("You Are Pass\n");
    } else{
        printf("you Are FAIL\n");
    }
}
int main(){
    float fVAlue = 0.0f;
    printf("Enter the percentage ");
    scanf("%f", &fVAlue);
    DisplayResult(fVAlue);


    return 0;
}