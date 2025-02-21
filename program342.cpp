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

        void InsertFirst(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;

            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if(head==NULL)
            {
                head=newn;
            }
            else
            {
                newn->next=head;
                head->prev=newn;
                head=newn;
            }
            iCount++;

        }
        void InsertLast(int no){}
        void InsertAtPos(int no , int ipos){}
        void DeleteFirst(){}
        void DeleteLast(){}
        void DeleteAtPos(int ipos){}
        void Display()
        {
            PNODE temp=head;

            cout<<"Elements of the linked are:\n";
            
            cout<<"NULL<=>";
            while(temp!=NULL)
            {
                cout<<"| " <<temp->data <<" |<=>";
                temp=temp->next;
            }
            cout<<"NULL<=>";
        }
        int Count()
        {
            return iCount;
        }

};

int main()
{
    DoublyLL dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of elements are :"<<iRet<<"\n";


    return 0;
}