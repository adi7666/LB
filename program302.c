#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void demo1(PNODE head)
{   }

void demo2(PPNODE head)
{   }

int main()
{
    struct node * first = NULL;

    NODE obj1;               
    NODE obj2;
    NODE obj3;

    obj1.data = 11;
    obj2.data = 21;
    obj3.data =51;

    obj1.next = &obj2;
    obj2.next = &obj3;
    obj3.next = NULL;

    first = &obj1;

    demo1(first);
    demo2(&first);
   
    return 0;
}