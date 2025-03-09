
class node
{
    public int data;
    public node next;

    public node(int x)
    {
        data = x;
        next = null;
    }
}

class SinglyCL
{
    public node head;
    public node tail;
    public int iCount ;

    SinglyCL()
    {
        head = null;
        tail = null;
        iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = new node(no);

        if(head == null)
        {
            head = newn;
            tail = newn;
        }
        else
        {
            newn.next = head;
            head = newn;
        }
        tail.next = head;

        iCount++;
    }

    public void InsertLast(int no)
    {
        node newn = new node(no);

        newn.data = no;
        newn.next = null;

        if(head == null)
        {
            head = newn;
            tail = newn;
        }
        else
        {
            
        }
    }
}

class program546
{
    public static void main(String args[])
    {
        SinglyCL sobj = new SinglyLL();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);




    }
}