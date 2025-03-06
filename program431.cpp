//Generic Doubly Circular LinkedList

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template <class T>
class DoublyCL
{
    public:
        struct node <T> * head;
        struct node <T> * tail;
        int iCount;

        DoublyCL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void DeleteFirst();
        void DeleteLast();
        void Display();
        int Count();
        void InsertAtPos(T no , int ipos);
        void DeleteAtPos(int ipos);
};

template <class T>
DoublyCL <T> :: DoublyCL()
{
    head = NULL;
    tail = NULL;
    iCount = 0;
}

template <class T>
void DoublyCL <T> :: InsertFirst(T no)
{
    struct node <T> * newn = NULL;

    newn = new node <T>;

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

template <class T>
void DoublyCL <T> :: InsertLast(T no)
{
    struct node <T> * newn = NULL;

    newn = new node <T>;

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

template <class T>
void DoublyCL <T> :: DeleteFirst()
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

template <class T>
void DoublyCL <T> :: DeleteLast()
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

template <class T>
void DoublyCL <T> :: Display()
{
    
    struct node <T> * temp = NULL;

    temp = head;

    cout<<"Elements of LinkedList are:\n";

    do
    {
        cout<<"| "<<temp->data<<"|<=>";
        temp = temp->next;
    } while (temp!=tail->next);
    cout<<"\n";
}

template <class T>
int DoublyCL <T> :: Count()
{
    return iCount;
}

template <class T>
void DoublyCL <T> :: InsertAtPos(T no , int ipos)
{
    struct node <T> * newn = NULL;
    struct node <T> * temp = NULL;
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
        newn = new node <T>;

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

template <class T>
void DoublyCL <T> :: DeleteAtPos(int ipos)
{
    struct node <T> * temp = NULL;
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


int main()
{
    DoublyCL <int> dobj;
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