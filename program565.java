import java.util.*;

class program565
{
    public static void main(String args[])
    {
        LinkedList <Integer>  lobj = new LinkedList<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);

        //Integer no = 0;  Error in this
        //Integer varun int zala 

        for(Integer no : lobj)
        {
            System.out.println(no);
        }

    }

}