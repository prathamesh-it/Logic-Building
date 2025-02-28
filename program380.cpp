//SinglyCL

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    public:
        PNODE head;
        PNODE tail;
        int iCount;

        SinglyCL()
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

            if((head==NULL)&&(tail==NULL))
            {
                head = newn;
                tail = newn;
            }
            else
            {
                newn->next = head;
                head = newn;
            }
            tail->next = head;

            iCount++;
        }
        void InsertLast(int no){}
        void InsertAtPos(int no , int ipos){}

        void DeleteFirst(){}
        void DeleteLast(){}
        void DeleteAtPos(int ipos){}

        void Display()
        {
            PNODE temp = NULL;

            temp = head;

            do
            {
                cout<<"| "<<temp->data<<"|->";
                temp = temp->next;
            } while (temp!=tail->next);
            printf("\n");
            
        }
        int Count()
        {
            return iCount;
        }
        
};

int main()
{
    SinglyCL sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of elements in LinkedList are :"<<iRet<<"\n";

    return 0;
}