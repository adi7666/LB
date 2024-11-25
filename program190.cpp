#include<iostream>

using namespace std;

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *Arr =NULL;                                 //DATA (CHARACTERISTICS)

    cout<<"Enter the number of element that you want to store : \n";
    cin>>iLength;
    
    Arr= new int[iLength];                          //Resource Allocation(Constructors)
    // Arr = (int *)malloc(sizeof(int)* iLength);
    cout<<"Enter the Values \n";
    for(iCnt = 1; iCnt< iLength; iCnt++)        //LOgic (Function)
    {
        cin>>Arr[iCnt];
    }
    cout<<"Values from the array are :\n";
    for(iCnt = 1; iCnt< iLength; iCnt++)        //Logic (Function)
    {
        cout<<Arr[iCnt];
    }

    delete []Arr;                               //Resources Deallocation (Destructors)
    
    return 0;
}