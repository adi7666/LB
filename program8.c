#include<stdio.h>
//////////////////////////////////////////////////////////////////
// Function Name : Addition  
// Description : It is used to perfrom addition of 2 float values
// Input : float , float
// Output :float
// Author : Aditya Jagtap
//  Date  : 06-09-2024

//////////////////////////////////////////////////////////////////

float Addtion(float fValue1, float fValue2){
    float fAdd = 0.0f;
    fAdd = fValue1 + fValue2;
    return fAdd;
}
//////////////////////////////////////////////////////////////////
// this Application is used to perform Addtion of 2 number
//////////////////////////////////////////////////////////////////
int main(){
    float fNo1 = 0.0f , fNo2 = 0.0f, fAns =0.0f;

    printf("enter First Number : \n");
    scanf("%f", &fNo1);

    printf("Enter scond Number :  \n");
    scanf("%f", &fNo2);

    fAns = Addtion(fNo1, fNo2);

    printf("Addition is :  %f",fAns);
    return 0;
}
