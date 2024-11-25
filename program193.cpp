#include<iostream>

using namespace std;

class Array
{
    public:
        int *Arr;
        int iSize;
    Array(int iNo)
     {
        iSize =iNo;
        Arr = new int[iSize];
    }

    ~Array()
    {
        delete []Arr;
    }

    void Accept()
    {
        int iCnt = 0;
        cout<<"Enter the Values \n";
        for(iCnt = 1; iCnt< iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void DisplayR()
    {
        int iCnt =0;
        cout<<"Values from the array are :\n";
        for(iCnt = iSize-1; iCnt<= 0; iCnt--)        //Logic (Function ->Display())
        {
            cout<<Arr[iCnt]<<endl;
        }
    }
    
};

int main()
{
    int iLength = 0,iRet = 0;

    cout<<"Enter the number of element that you want to store : \n";
    cin>>iLength;
    
    Array aobj(iLength);
    aobj.Accept();
    aobj.DisplayR();

    // iRet = aobj.CountEven();
    // cout<<"Number of even Elements Are :"<<iRet<<endl;
    return 0;
}