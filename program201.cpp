#include<iostream>

using namespace std;

int main()
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

    return 0;
}