
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
            tail.next = newn;
            tail = newn;   
        }
        tail.next = head;

        iCount++;
    }

    public void DeleteFirst()
    {
        if((head==null) && (tail==null))
        {
            return;
        }
        else if(head.next == null)
        {
            head = null;
            tail = null;
        }
        else
        {
            head = head.next;
            tail.next = head;
        }
        System.gc();

        iCount--;
    }

    public void DeleteLast()
    {
        if((head==null) && (tail==null))
        {
            return;
        }
        else if(head.next == null)
        {
            head = null;
            tail = null;
        }
        else
        {
            node temp = head;

            while(temp.next != tail)
            {
                temp = temp.next;
            }
            tail = temp;
            tail.next = head;
            
        }
        System.gc();

        iCount--;
    }

    public void Display()
    {
        node temp = head;

        System.out.println("Elements of the Linkedlist are : ");

        do
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }while(temp != tail.next);

        System.out.println("");
    }

    public int Count()
    {
        return iCount;
    }
}

class program548
{
    public static void main(String args[])
    {
        SinglyCL sobj = new SinglyCL();
        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the Linkedlist are : "+iRet);

        sobj.DeleteFirst();

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the Linkedlist are : "+iRet);

        sobj.DeleteLast();

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements in the Linkedlist are : "+iRet);




    }
}