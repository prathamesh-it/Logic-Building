#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE , *PNODE;

class stack
{
    public:
        PNODE head;
        int iCount;

        stack()
        {
            head = NULL;
            iCount = 0;
        }

        void push(int no)           //InsertFirst
        {
            PNODE newn = NULL;

            newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            if(head==NULL)
            {
                head = newn;
            }
            else
            {
                newn->next = head;
                head = newn;
            }
            iCount++;
        }

        int pop()               //DeleteFirst
        {
            int no = -1;
            PNODE temp = NULL;

            if(head==NULL)          // Check if the stack is empty
            {
                cout<<"Stack is empty\n";
                return -1;  //clear and direct indication that the function is exiting due to an error condition.
            }
            else if(head->next ==NULL)
            {
                no = head->data;
                delete head;
                head = NULL;
            }
            else
            {
                no = head->data;
                temp = head;
                head = head->next;
                delete temp;
            }
            iCount--;
            return no;
        }

        void Display()
        {}

        int iCount()
        {
            return iCount;
        }
};

int main()
{

    stack sobj;

    sobj.push(101);
    sobj.push(51);
    sobj.push(21);
    sobj.push(11);


    return 0;
}