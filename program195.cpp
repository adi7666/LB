#include<iostream>

using namespace std;

void Swap (int *p , int *q)
{
    int temp =0;
    temp = *p; 
    temp = *q;
}

int main()
{
    int iNo1 = 0,iNo2 = 0;

    cout<<"Enter the First number : \n";
    cin>>iNo1;
    
    cout <<"ENter the Second Number : \n";
    cin>>iNo2;

    Swap(&iNo1, &iNo2);

    cout<<"Value of no1 after swapping : "<<iNo1<<endl;
    cout<<"Value of No2 after swapping : "<< iNo2<<endl;

    
    return 0;
}