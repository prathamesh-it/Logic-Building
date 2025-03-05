//Gneric Singly Circular LinkedList

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyCL
{
    public:
        struct node <T> * head;
        struct node <T> * tail;
        int iCount;

        SinglyCL();
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
SinglyCL <T>:: SinglyCL()
{
    head = NULL;
    tail = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL <T> :: InsertFirst(T no)
{
    struct node <T> * newn = NULL;

    newn = new node <T>;

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

template <class T>
void SinglyCL <T> :: InsertLast(T no)
{
    struct node <T> * newn = NULL;

    newn = new node <T>;

    newn->data = no;
    newn->next = NULL;

    if((head==NULL)&&(tail==NULL))
    {
        head = newn;
        tail = newn;
    }
    else
    {
        tail->next = newn;
        tail = newn;
    }
    tail->next = head;

    iCount++;
}

template <class T>
void SinglyCL <T> :: DeleteFirst()
{
    if((head==NULL)&&(tail==NULL))
    {
        return;
    }
    else if(head==tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        head = head->next;
        delete tail->next;

        tail->next = head;
    }

    iCount--;
}

template <class T>
void SinglyCL <T> :: DeleteLast()
{
    struct node <T> * temp = NULL;

    if((head==NULL)&&(tail==NULL))
    {
        return;
    }
    else if(head==tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        temp = head;

        while(temp->next!=tail)
        {
            temp = temp->next;
        }
        delete temp->next;
        tail = temp;

        tail->next = head;
    }

    iCount--;
}

template <class T>
void SinglyCL <T> :: Display()
{
    struct node <T> * temp = NULL;

    temp = head;

    do
    {
        cout<<"| "<<temp->data<<"|->";
        temp = temp->next;
    } while (temp!=tail->next);
    printf("\n");
    

}

template <class T>
int SinglyCL <T> :: Count()
{
    return iCount;
}

template <class T>
void SinglyCL <T> :: InsertAtPos (T no , int ipos)
{
    struct node <T> * newn = NULL;
    struct node <T> * temp = NULL;

    int i =0;

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

        temp = head;

        for(i = 1 ; i<ipos-1;i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

template <class T>
void SinglyCL <T> :: DeleteAtPos(int ipos)
{
    struct node <T> * temp = NULL;
    struct node <T> * target = NULL;

    int i =0;

    if((ipos<1) || (ipos>iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos==1)
    {
        DeleteFirst();
    }
    else if(ipos==iCount+1)
    {
        DeleteLast();
    }
    else
    {
        
        temp = head;

        for(i = 1 ; i<ipos-1;i++)
        {
            temp = temp->next;
        }
        target = temp->next;

        temp->next = target->next;
        delete target;

        iCount--;
    } 
}


int main()
{
    SinglyCL <int> sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of elements in LinkedList are :"<<iRet<<"\n";

    sobj.InsertAtPos(75 , 4);
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of elements in LinkedList are :"<<iRet<<"\n";

    sobj.DeleteAtPos(4);
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of elements in LinkedList are :"<<iRet<<"\n";

    return 0;
}
