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
typedef struct node** PPNODE;

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
        void InsertLast(int no)
        {
            PNODE newn = NULL;
            PNODE temp = head;

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
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newn;
                newn->prev=temp;
            }
            iCount++;

        }
        void InsertAtPos(int no , int ipos){}
        void DeleteFirst()
        {
            PNODE temp = head;

            if(head==NULL)
            {
                return;
            }
            else if(head->next==NULL)
            {
                delete head;
                head=NULL;
            }
            else
            {
                head=head->next;
                head->prev=NULL;
                delete temp;
            }
            iCount--;

        }
        void DeleteLast()
        {
            PNODE temp = head;

            if(head==NULL)
            {
                return;
            }
            else if(head->next==NULL)
            {
                delete head;
                head=NULL;
            }
            else
            {
                temp=head;
                
                while(temp->next->next!=NULL)
                {
                    temp=temp->next;
                }
                delete temp->next;
                temp->next=NULL;
            }
            iCount--;
        }
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
            printf("NULL\n");
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

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of elements are :"<<iRet<<"\n";

    dobj.DeleteFirst();

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of elements are :"<<iRet<<"\n";

    dobj.DeleteLast();

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of elements are :"<<iRet<<"\n";

    return 0;
}