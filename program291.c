#include<stdio.h>

void Display(int Arr[], int iSize)
{
    int i  = 0;
    for(i = 0; i< iSize; i++ )
    {
        printf("%d\n", Arr[i]);
    }

}
int main()
{
    int BRR[] = {10, 20, 30, 40, 50};
    Display(BRR, 5);
    return 0;
}