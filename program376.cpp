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
        {}

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

        void InsertAtPos(int no , int ipos){}

        void DeleteAtPos(int ipos)
        {}

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


    
    return 0;
}