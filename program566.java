import java.util.*;

class program566
{
    public static void main(String args[])
    {
        LinkedList <Integer>  lobj = new LinkedList<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);
        lobj.add(111);

        lobj.add(1 , 5);

        for(Integer no : lobj)
        {
            System.out.println(no);
        }

    }

}