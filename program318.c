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
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(PNODE));

    newn->data=no;
    newn->next=NULL;

    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        newn->next=*head;
        *head=newn;
    }

}

void InsertLast(PPNODE head , int no)
{
    PNODE newn=NULL;
    PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(PNODE));

    newn->data=no;
    newn->next=NULL;

    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
}

void Display(PNODE head)
{
    printf("Elements of linked list are:\n");

    while(head!=NULL)
    {
        printf("|%d|->",head->data);
        head=head->next;
    }
    printf("NULL\n");
    
}

int Count(PNODE head)
{
    int iCount=0;
    while(head!=NULL)
    {
        iCount++;
        head=head->next;
    }
    return iCount;
}

void DeleteFirst(PPNODE head)
{
    PNODE temp=NULL;

    if(*head==NULL)
    {
        return;
    }
    else if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;
    }
    else
    {
        temp=*head;
        *head=(*head)->next;
        free(temp);

    }

}

void DeleteLast(PPNODE head)
{
    PNODE temp=NULL;

    if(*head==NULL)
    {
        return;
    }
    else if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;
    }
    else
    {
        temp=*head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }

}

void InsertAtPos(PPNODE head, int no , int ipos)
{
    int CountNode=0;
    int i = 0;

    PNODE newn = NULL;
    PNODE temp=NULL;

    CountNode = Count(*head);       //pass address of 1st node to Count function i.e 100  //call by value

    if((ipos<1) || (ipos>CountNode+1))   //6 node astil tr 7 valid ahe 8 9 10 nahi     //filter
    {
        printf("Invalid position\n");
        return ;
    }

    if(ipos==1)                       //Pos==1
    {
        InsertFirst(head,no);     //(50,no)
    }
    else if(ipos==CountNode+1)          //Pos==Last
    {
        InsertLast(head,no);     //(50,no)
    }
    else                                //In between position
    {
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;

        temp=*head;
        for(i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }

}

void DeleteAtPos(PPNODE head , int ipos)
{
    int CountNode=0;
    int i = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    CountNode = Count(*head);       //pass address of 1st node to Count function i.e 100  //call by value

    if((ipos<1) || (ipos>CountNode))   //6 is valid position but not 7    //Filter
    {
        printf("Invalid position\n");
        return ;
    }

    if(ipos==1)                       //Pos==1
    {
        DeleteFirst(head);     //(50)
    }
    else if(ipos==CountNode)          //Pos==Last
    {
        DeleteLast(head);    //(50)
    }
    else                                //In between position
    {
        temp=*head;

        for(i=1 ; i<ipos-1 ; i++)
        {
            temp=temp->next;
        }
        target=temp->next;

        temp->next=target->next;

        free(target);

    }

}

int main()
{
    PNODE first=NULL;
    int iRet=0;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,101);
    InsertLast(&first,111);
    InsertLast(&first,121);

    InsertAtPos(&first,75,4);

    Display(first);
    iRet = Count(first);
    printf("Number of elements are : %d\n",iRet);

    DeleteAtPos(&first,4);

    Display(first);
    iRet = Count(first);
    printf("Number of elements are : %d\n",iRet);

    return 0;
}

/*
OUTPUT:
Elements of linked list are:
|11|->|21|->|51|->|75|->|101|->|111|->|121|->NULL
Number of elements are : 7
Elements of linked list are:
|11|->|21|->|51|->|101|->|111|->|121|->NULL
Number of elements are : 6


*/