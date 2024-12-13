#include<stdio.h>

void Display(int Arr[], int iSize)
{
    static  int i  = 0;
    if(i< iSize  )
    {
        printf("%d\n", Arr[i]);
        i++;
        Display(Arr, iSize);
    }

}

int main()
{
    int BRR[] = {10, 20, 30, 40, 50};
    Display(BRR, 5);
    return 0;
}