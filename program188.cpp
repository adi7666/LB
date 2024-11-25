#include<iostream>

using namespace std;

class Number
{
    public:
    int iNo;

    Number(int A)
    {
         iNo = A;
    }
     DisplayFactors()        //O(N/2)
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
};

void 

int main()
{
    int iValue = 0;
    cout<<"Enter The Number : \n";
    cin>>iValue;
    Number nobj(iValue);
    nobj.DisplayFactors();

    return 0;
}