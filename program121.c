// Row  = 4 col =4
/*
    1   2   3   4
    1   2   3   4
    1   2   3   4
    1   2   3   4
*/


#include<stdio.h>

void display(int iROw, int iCol){
    int i =0, j=0;
    // for(i =1; i<=iROw; i++)
    {
        printf("%d\t",i);
        for(j = 1; j <= iCol; j++)
        {
        printf("%d\t",i);
        }
        printf("\n");
    }
}

int main(){
    int iValue =0, iValue2 = 0;
    printf("Enter the no of ROW : \n");
    scanf("%d", &iValue);

    printf("Enter the no of Col : \n");
    scanf("%d", &iValue2);
    display(iValue, iValue2);
    return 0;
}