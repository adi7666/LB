#include<iostream>

using namespace std;

void DisplayBinary(int iNo)
{
    int No = 0;
    int Digits = 0;

    while(No != 0 )
    {
        Digits  = No % 2;
        cout << Digits;
        No = No /2;
    }

    cout <<"\n";

}
int main()
{
    int iValues =0;

    cout<<"Enter number : \n";
    cin>>iValues;
    DisplayBinary(iValues);    
    return 0;
}