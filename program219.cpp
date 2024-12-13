#include<iostream>

using namespace std;

int main()
{
    int iValue = 0;
    int iPos = 0;
    int iMask =0X1;
    cout<<"Enter the number : "<<endl;
    cin>>iValue;

    cout<<"Enter the Postition : \n"<<endl;
    cin>>iPos;

    iMask = iMask << (iPos -1);
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