#include<stdio.h>

float CircleArea(float fRadius){
float FArea = 0.0f;
FArea = 3.14 * fRadius *fRadius;
return FArea;

}
int main(){
    float fValue = 0.0f;
    double Result = 0.0f;
    printf("Enter the Radius of circle\n");
    scanf("%f", &fValue);
    Result= CircleArea(fValue);
    printf("Area Of Circle is : %f\n", fValue);

    
    return 0;
}