#include<stdio.h>
#include<stdlib.h>


struct node 
{
    int data;
    struct node * next;
};

int main()
{
    struct node obj;                //object 
    struct node obj2;
    struct node obj3;

    obj.data = 11;
    obj2.data = 21;
    obj3.data =51;

    obj.next = &obj2;
    obj2.next = &obj3;
    obj3.next = NULL;
    
    return 0;
}