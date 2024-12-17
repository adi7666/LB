#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFIrst(PNODE head , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));       //Allocate the memory

    newn -> data = no;
    newn -> next = NULL;        //Initialise the members

    if(*head == NULL)           // case 1: LInked List is empty
    {
        *head = newn;
    }
    else                        //case 2: Linked list contains atleat 1 node
    {
        newn -> next = *head;
        *head = newn;
    }                      
}

int main()
{
    PNODE  first = NULL;

    InsertFIrst(&first, 51);
    InsertFIrst(&first, 21);
    InsertFIrst(&first, 11);

    return 0;
}