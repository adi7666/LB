#include<iostream>

using namespace std;


void DisplayFactors(int iNo)        //O(N)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {   if(iNo % iCnt == 0)
        {
            cout<<iCnt<<endl;
            cout<<iCnt<<endl;
        }
    }
}

int main()
{
    int iValue = 0;
    cout<<"Enter The Number : \n";
    cin>>iValue;

    DisplayFactors(iValue);

    return 0;
}