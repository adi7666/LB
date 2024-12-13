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
        for(iCnt = 1; iCnt<= iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {
        int iCnt =0;
        cout<<"Values from the array are :\n";
        for(iCnt = 1; iCnt<= iSize; iCnt++)        //Logic (Function ->Display())
        {
            cout<<Arr[iCnt]<<endl;
        }
    }
    int CountEven()
        {
            int iCnt = 0, iCount = 0;

            for(iCnt = 0; iCnt <= iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    iCount++;
                }
            }
            return iCount;
        }
};

int main()
{
    int iLength = 0,iRet = 0;

    cout<<"Enter the number of element that you want to store : \n";
    cin>>iLength;
    
    Array aobj(iLength);
    aobj.Accept();
    aobj.Display();

    iRet = aobj.CountEven();
    cout<<"Number of even Elements Are :"<<iRet<<endl;
    return 0;
}