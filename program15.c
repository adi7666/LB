/*

Start
    Accept the percentage from User
    If Percentage are less than 40 then display FAIL
    And if it is grater than or equal to 40 then  display PASS
Stop

*/
#include<stdio.h>

void DisplayResult(float fpercentage){
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