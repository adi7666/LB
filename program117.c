#include<stdio.h>

void display(){
    int i =0, j=0;
    for(i =1; i<=4; i++)
    {
        for(j = 1; j <= 3; j++)
        {
        printf("*\t");
        }
        printf("\n");
    }
}

int main(){
    display();
    return 0;
}