    //Input : 5
/*
    Output : a   b   c   d
             a   f   g   h
             

*/ 
#include<stdio.h>
void Display(int iRow, int iCol)
{
    int i = 0, j =0 ;
    if(iRow != iCol)
    {
        printf("Invalid input \n");
        return;
    }
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i >= j)  // Diagonal + lower
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