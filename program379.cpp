//DoublyCL

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

class DoublyCL
{
    public:
        PNODE head;
        PNODE tail;
        int iCount;

        DoublyCL()
        {
            head = NULL;
            tail = NULL;
            iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;

            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if((head==NULL)&&(tail==NULL))
            {
                head = newn;
                tail = newn;
            }
            else
            {
                newn->next = head;
                head->prev = newn;
                head = newn;
            }
            (tail)->next = head;
            (head)->prev = tail;

            iCount++;
        }

        void InsertLast(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;

            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if((head==NULL)&&(tail==NULL))
            {
                head = newn;
                tail = newn;
            }
            else
            {
                tail->next = newn;
                newn->prev = tail;
                tail = newn;
            }
            (tail)->next = head;
            (head)->prev = tail;

            iCount++;

        }

        void DeleteFirst()
        {
            if((head==NULL)&&(tail==NULL))
            {
                return;
            }
            else if(head==tail)
            {
                delete head;
                head = NULL;
                tail =NULL;
            }
            else
            {
                head = head->next;
                delete tail->next;

                head->prev = tail;
                tail->next=head;
                
            }
            iCount--;
        }

        void DeleteLast()
        {
            if((head==NULL)&&(tail==NULL))
            {
                return;
            }
            else if(head==tail)
            {
                delete head;
                head = NULL;
                tail =NULL;
            }
            else
            {
                tail = tail->prev;
                delete tail->next;

                head->prev = tail;
                tail->next=head;
                
            }
            iCount--;
        }

        void Display()
        {
            
            PNODE temp = head;
            cout<<"Elements of LinkedList are:\n";

            do
            {
                cout<<"| "<<temp->data<<"|<=>";
                temp = temp->next;
            } while (temp!=tail->next);
            cout<<"\n";
        }

        int Count()
        {
            return iCount;
        }

        void InsertAtPos(int no , int ipos)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;
            int i = 0;

            if((ipos<1) || (ipos>iCount+1))
            {
                cout<<"Invalid position\n";
                return;
            }

            if(ipos==1)
            {
                InsertFirst(no);
            }
            else if(ipos==iCount+1)
            {
                InsertLast(no);
            }
            else
            {
                newn = new NODE;

                newn->data = no;
                newn->next = NULL;
                newn->prev = NULL;

                temp = head;

                for(i=1 ; i<ipos-1 ; i++)
                {
                    temp = temp->next;
                }
                newn->next = temp->next;
                temp->next->prev = newn;
                temp->next = newn;
                newn->prev = temp;

                iCount++;
            }
        }

        void DeleteAtPos(int ipos)
        {
            PNODE temp = NULL;
            int i = 0;

            if((ipos<1) || (ipos>iCount))
            {
                cout<<"Invalid position\n";
                return;
            }

            if(ipos==1)
            {
                DeleteFirst();
            }
            else if(ipos==iCount)
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
                temp->next = temp->next->next;
                delete temp->next->prev;
                temp->next->prev = temp;

                iCount--;
            }
        }

};

int main()
{
    DoublyCL dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements in LinkedList are :"<<iRet<<"\n";

    dobj.DeleteFirst();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements in LinkedList are :"<<iRet<<"\n";

    dobj.DeleteLast();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements in LinkedList are :"<<iRet<<"\n";

    dobj.InsertAtPos(75 , 4);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements in LinkedList are :"<<iRet<<"\n";

    dobj.DeleteAtPos(4);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements in LinkedList are :"<<iRet<<"\n";
    


    
    return 0;
}