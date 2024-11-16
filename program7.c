#include<stdio.h>

float Addtion(float fValue1, float fValue2){
    float fAdd = 0.0f;
    fAdd = fValue1 + fValue2;
    return fAdd;
}

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
