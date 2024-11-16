#include<stdio.h>
//iteration approach Using the funtional Approach

void Display(int iFreq){
    int iCounter=0;
    for(iCounter =1; iCounter<=iFreq; iCounter++)
    {   
    printf("Jay Ganesh....\n");
    }

}
int main(){
    
    int iFrequency = 0;
    printf("Enter the Frequncy: \n");
    scanf("%d",&iFrequency);
    Display(iFrequency);
    return 0;
}