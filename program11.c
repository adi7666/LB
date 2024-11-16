#include<stdio.h>

int main(){
    float fRadius = 0.0f;
    double fArea = 0.0f;
    printf("Enter the Radius of circle\n");
    scanf("%f", &fRadius);
    fArea= 3.14f * fRadius * fRadius;
    printf("Area Of Circle is : %f\n", fArea);

    
    return 0;
}