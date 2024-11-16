#include<stdio.h>
void Display(int iValue){
    int iCnt =0;
    iCnt =1;
    while( iCnt <=iValue){
        printf("%d . JAy Ganesh...>\n", iCnt);
        iCnt++;
    }
}
int main(){
    
    int iFrequency=0;
    printf("Enter the Frequency : \n");
    scanf("%d\n", &iFrequency);
    Display(iFrequency);
    return 0;
}