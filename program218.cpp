#include<iostream>

using namespace std;

bool CheckFifthBit(int iNo)
{
    int iMask = 0Xe000;        // for hexadecimal
    
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
    return true;
    }
    else 
    {
        
        return  false;
    }

}
int main()
{
    int iValue = 0;
    bool bRet = false;
    cout << " Enter Number : \n";
    cin>>iValue;

    bRet = CheckFifthBit(iValue);

    if(bRet)
    {
        cout << "14 15 16th Bit is ON"<<endl;
    }
    else 
    {
        cout<< "14 15 16th Bit is OFF"<<endl;
    }


    return 0;
}



// 0000     0000    0000    0000    1110    0000    0000    0000
// 0        0       0      0        e       0        0      0
// 10000
// 0X1000