//Doubly Linear Linked List

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    public:
        PNODE head;
        int iCount;

        DoublyLL()
        {
            head = NULL;
            iCount = 0;
        }

        void InsertFirst(int no){}
        void InsertLast(int no){}
        void InsertAtPos(int no , int ipos){}
        void DeleteFirst(){}
        void DeleteLast(){}
        void DeleteAtPos(int ipos){}
        void Display(){}
        int Count(){}

};

int main()
{


    return 0;
}