#include<iostream>

using namespace std;

bool CheckFifthBit(int iNo)
{
    int iMask = 68;        // for decimal
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
        cout << "3rd and 7th Bit is ON"<<endl;
    }
    else 
    {
        cout<< "Bit is OFF"<<endl;
    }


    return 0;
}