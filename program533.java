//          QUEUE  IN JAVA
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

class Queue
{
    public node head;
    public int iCount;

    public Queue()
    {
        head = null;   
        iCount = 0;
    }

    public void EnQueue(int no)
    {
        node newn = null;
    
        newn = new node(no);

        if(head == null)
        {
            head = newn;
        }
        else
        {
            node temp = head;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        iCount++;
    }

    public void Display()
    {
        System.out.println("Elements of Linked List are :");

        node temp = head;

        while(temp != null)
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return iCount;
    }

    public int DeQueue()
    {
        int no = 0;

        if(head==null)
        {
            System.out.println("Queue is empty");
            return -1;
        }
        else if(head.next == null)
        {
            no = head.data;
            head = null;
            System.gc();
        }
        else
        {
            no = head.data;
            head = head.next;
            System.gc();
        }
        iCount--;
        return no;
    }

}

class program533
{
    public static void main (String args[])
    {
        Queue qobj = new Queue();
        int iRet = 0;

        qobj.EnQueue(11);
        qobj.EnQueue(21);
        qobj.EnQueue(51);
        qobj.EnQueue(101);
        qobj.EnQueue(111);
        qobj.EnQueue(121);

        qobj.Display();
        iRet = qobj.Count();

        System.out.println("Number of elements in the Queue are : "+iRet);

        iRet = qobj.DeQueue();
        System.out.println("Removed element from Queue is : "+iRet);

        iRet = qobj.DeQueue();
        System.out.println("Removed element from Queue is : "+iRet);

        qobj.Display();
        iRet = qobj.Count();

        System.out.println("Number of elements in the Queue are : "+iRet);

    }
}