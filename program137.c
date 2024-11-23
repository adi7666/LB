/*
    Input : Row = 4 Col = 4

    @   
    *   @   
    *   *   @   
    *   *   *   @
*/
#include<stdio.h>
void Display(int iRow, int iCol)
{

    if(iRow != iCol)
    {
        printf("Invalid input \n");
        return;
    }
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j<= iCol; j++)
        {
            if(i == j){             //Diagonal
                printf("@\t");
            }
            
            else if(i>j)            //lower
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
    
}   

int main()
{
    int iValue1 =0, iValue2 = 0;
    printf("Enter Number of rows: \n");
    scanf("%d",&iValue1 );

    printf("Enter Number of rows: \n");
    scanf("%d",&iValue2 );

    Display(iValue1, iValue2);
    return 0;
}