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

void InsertFirst(PPNODE head,int no)
{
    PNODE newn = NULL;

            //void *            12
    newn = (PNODE)malloc(sizeof(NODE));     //Allocate the memory

    newn->data = no;                        //Initialise the members
    newn->next = NULL;

    if(*head==NULL)                   //CASE 1 (LL is empty)
    {
        *head = newn;
    }
    else                            //CASE 2    (LL contains atleat 1 node)
    {
        newn->next = *head;
        *head = newn;

    }

}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);


    return 0;
}