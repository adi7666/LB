#include<iostream>

using namespace std;

// bool CheckBit(int iNo, int iPos)
// {
//     int iMask = 0X1;
//     int iResult =0;
//     iMask = iMask << (iPos -1);

//     iResult = iNo & iMask;
//     if(iResult == iMask)
//     {
//         return true;

//     }
//     else{
//         return false;
//     }

// }

int main()
{
    int iValue = 0;
    int ilocation = 0;
    int iMask =0X10;
    int iResult = 0;
    cout<<"Enter the number : "<<endl;
    cin>>iValue;

    // cout<<"Enter the Postition : "<<endl;
    // cin>>ilocation;

    iResult = iValue ^ iMask;

    cout<<"Number after bit toggle : "<<iResult<<endl;

    return 0;
}


/*
iNO : 25            0   0   0   1   1   0   0   1
                    0   0   0   0   1   0   0   1     this is 9 in decimal 

                    0   0   0   1   1   0   0   1    iNo
                    0   0   0   1   0   0   0   1   iMask
                    ------------------------------            
                    0   0   0   0   1   0   0   1   iResult


                    0   0   0   1   1   0   0   1    iNo
                    0   0   0   1   0   0   0   1   iMask
                    ------------------------------            
                    0   0   0   0   1   0   0   1   iResult
*/  