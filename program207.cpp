#include<iostream>
using namespace std;

// bool CheckBit(int iNo)
int main()
{
    int iValue = 0;
    int iMask = 0X2;
    int iResult = 0;

    cout << "Enter nUmber : \n";
    cin>> iValue;

    iResult = iValue & iMask;

    if(iResult == 0)
    {
        cout<< "Second Bit is off \n";


    }
    else 
    {
        cout << "Second bit is ON \n";
    }

    return 0;
}