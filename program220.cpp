#include<iostream>

using namespace std;

bool CheckBit(int iNo, int iPos)
{
    int iMask = 0X1;
    int iResult =0;
    iMask = iMask << (iPos -1);

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;

    }
    else{
        return false;
    }

}

int main()
{
    int iValue = 0;
    int ilocation = 0;
    // int iMask =0X1;
    bool bRet = false;
    
    
    cout<<"Enter the number : "<<endl;
    cin>>iValue;

    cout<<"Enter the Postition : "<<endl;
    cin>>ilocation;

    bRet = CheckBit(iValue, ilocation);
    if(bRet )
    {
        cout<< "Bit in On "<<endl;
    }
    else
    {
        cout<< "Bit in Off"<<endl;
    }


    return 0;
}


/*
iPos : 9

iMask   0000    0000    0000    0000    0000    0000    0000    0001     0X1

                            iMask = iMask << (iPos-1);
                            iMask = iMask << 8

iMASK FOR 9TH BIT
iMask   0000    0000    0000    0000    0000    0001    0000    0000
                                                   ^ <- this is 9t bit        


*/