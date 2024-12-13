#include<iostream>

using namespace std;

int  OFFBit(int iNo, int iPos)
{
    int iMask = 0X1;
    int iResult =0;
    
    iMask = iMask << (iPos -1);
    iResult = iNo ^ iMask;
    return iResult;
//     iResult = iNo & iMask;
//     if(iResult == iMask)
//     {
//         return true;

//     }
//     else{
//         return false;
//     }

}

int main()
{
    int iValue = 0;
    int iRet =0;
    int iLocation =0;
    cout<<"Enter the number : "<<endl;
    cin>>iValue;

    cout<<"Enter the Postition : "<<endl;
    cin>>ilocation;

    iRet = ToggleBit(iValue, iLocation);

    cout<<"Number after bit toggle : "<<iRet<<endl;

    return 0;
}


