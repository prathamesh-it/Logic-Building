// Generic Doubly Linear Linked List

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
class DoublyLL
{
    public:
        struct node <T> * head;
        int iCount;

        DoublyLL();
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
DoublyLL <T> :: DoublyLL()
{
    head = NULL;
    iCount = 0;
}

template <class T>
void DoublyLL <T> :: InsertFirst(T no)
{
    struct node <T> * newn = NULL;

    newn = new node <T>;

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

template <class T>
void DoublyLL <T> :: InsertLast(T no)
{
    struct node <T> * newn = NULL;
    struct node <T> * temp = head;

    newn = new node <T>;

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

template <class T>
void DoublyLL <T> :: DeleteFirst()
{
    struct node <T> * temp = head;

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

template <class T>
void DoublyLL <T> :: DeleteLast()
{
    struct node <T> * temp = head;

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

template <class T>
void DoublyLL <T> :: Display()
{
    struct node <T> * temp=head;

    cout<<"Elements of the linked are:\n";
    
    cout<<"NULL<=>";
    while(temp!=NULL)
    {
        cout<<"| " <<temp->data <<" |<=>";
        temp=temp->next;
    }
    printf("NULL\n");
}

template <class T>
int DoublyLL <T> :: Count()
{
    return iCount;
}

template <class T>
void DoublyLL  <T>:: InsertAtPos(T no , int ipos)
{
    int i = 0;

    struct node <T> * newn = NULL;
    struct node <T> * temp = NULL;

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
        newn = new node <T>;

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

template <class T>
void DoublyLL <T> :: DeleteAtPos(int ipos)
{
    int Countnode = 0;
    int i = 0;

    struct node <T> * target = NULL;
    struct node <T> * temp = NULL;

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


int main()
{
    DoublyLL <int> dobj;
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