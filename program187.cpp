#include<iostream>

using namespace std;

void DisplayFactors(int iNo)        //O(N/2)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)        
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



/*
    1. probems on Numbers 
    2. problems on digits
    3. problems on N Numbers
    4. problems on pattern printing
    5. problems on String

*/