#include<iostream>

using namespace std;

class Arithmatic
{
    public:
    int iValue1;
    int iValue2;

    Arithmatic(int A, int B)
    {
        iValue1 = A;
        iValue2 = B;

    }
    
    int Addition()
    {
        int iResult = 0;
        iResult = iValue1 + iValue2;
        return iResult;
    }
};

int main(){
    int iNo1 = 10, iNo2 = 11, iAns =0;

    cout<<"Enter the First number : \n";
    cin>>iNo1;

    cout<<"Enter the Second Number : \n";
    cin>>iNo2;

    Arithmatic aobj(iNo1, iNo2);

    iAns = aobj.Addition();

    cout<<"Addition is :"<<iAns<<endl;

    return 0;
}