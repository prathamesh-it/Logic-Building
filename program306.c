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

    newn = (PNODE)malloc(sizeof(NODE));     

    newn->data = no;                        
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

void InsertLast(PPNODE head,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     

    newn->data = no;                        
    newn->next = NULL;

    if(*head==NULL)                   //CASE 1 (LL is empty)
    {
        *head = newn;

    }
    else                            //CASE 2    (LL contains atleat 1 node)
    {
        temp = *head;

        while(temp->next !=NULL)       //temp->next gives the address of the next node.
        {
            temp = temp->next;
        }
        temp->next = newn;        //Set temp->next (currently NULL) to point to newn (address 500).
    }

}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,101);
    InsertLast(&first,111);


    return 0;
}