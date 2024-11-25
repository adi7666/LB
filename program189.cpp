#include<iostream>

using namespace std;

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *Arr =NULL;

    cout<<"Enter the number of element that you want to store : \n";
    cin>>iLength;
    
    Arr= new int[iLength];
    // Arr = (int *)malloc(sizeof(int)* iLength);
    cout<<"Enter the Values \n";
    for(iCnt = 1; iCnt< iLength; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    cout<<"Values from the array are :\n";
    for(iCnt = 1; iCnt< iLength; iCnt++)
    {
        cout<<Arr[iCnt];
    }

    delete []Arr;
    
    return 0;
}