#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0X2;
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

    bRet = CheckBit(iValue);

    if(bRet)
    {
        cout << "Bit is ON"<<endl;
    }
    else 
    {
        cout<< "Bit is OFF"<<endl;
    }


    return 0;
}