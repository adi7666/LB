#include<iostream>

using namespace std;

int main()
{
    // 
    int No1 = 13;
    int No2 = 24;

    int Ans = 0;

    Ans = No1 & No2;
    cout<< "Bitwise And : "<<Ans<<"\n";

    Ans = No1 | No2;
    cout<< "BItwise or : "<<Ans<<"\n";

    Ans = No1 ^ No2;
    cout<<"Bitwise Xor : "<<Ans<<endl; 
        
    return 0;
}