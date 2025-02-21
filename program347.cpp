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

        void InsertAtPos(int no , int ipos)
        {
            int i = 0;

            PNODE newn = NULL;
            PNODE temp = NULL;

            if((ipos<1) || (ipos>iCount+1))
            {
                cout<<"Invalid position";
                return;
            }

            if(ipos==1)
            {
                InsertFirst(no);
            }
            if(ipos==iCount+1)
            {
                InsertLast(no);
            }
            else
            {
                newn = new NODE;

                newn->data=no;
                newn->next = NULL;
                newn->prev = NULL;

                temp = head;

                for(i=1 ; i<ipos-1 ; i++)
                {
                    temp=temp->next;
                }
                newn->next=temp->next;
                temp->next->prev=newn;
                temp->next = newn;
                newn->prev = temp;

                iCount++;

            }
            
        }

        void DeleteAtPos(int ipos)
        {
            int Countnode = 0;
            int i = 0;

            PNODE target = NULL;
            PNODE temp = NULL;

            Countnode = Count();

            if((ipos<1) || (ipos>Countnode+1))
            {
                cout<<"Invalid position";
                return;
            }

            if(ipos==1)
            {
                DeleteFirst();
            }
            if(ipos==Countnode)
            {
                DeleteLast();
            }
            else
            {
                temp = head;

                for(i=1 ; i<ipos-1 ; i++)
                {
                    temp = temp->next;
                }
                target = temp->next;

                temp->next=target->next;
                temp->next->prev = temp;

                delete target;

                iCount--;

            }
            
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

    dobj.InsertAtPos(75 , 4);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of elements are :"<<iRet<<"\n";

    dobj.DeleteAtPos(4);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of elements are :"<<iRet<<"\n";

    return 0;
}