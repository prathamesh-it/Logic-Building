#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next;
    struct node *prev;
}NODE , *PNODE , **PPNODE;

void InsertFirst(PPNODE head , PPNODE tail , int no)
{
    
}

void InsertLast(PPNODE head , PPNODE tail , int no){}
void InsertAtPos(PPNODE head , PPNODE tail , int no , int ipos){}

void DeleteFirst(PPNODE head , PPNODE tail){}
void DeleteLast(PPNODE head , PPNODE tail ){}
void DeleteAtPos(PPNODE head , PPNODE tail , int ipos){}

void Display(PNODE head , PNODE tail){}
int Count(PNODE head , PNODE tail)
{
    return 0;
}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;

    return 0;
}