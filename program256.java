
import java.util.*;

class program256
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0,i = 0;

        //STEP 1:
        System.out.println("Enter number of elements :");   //Dynamic allocation
        iSize = sobj.nextInt();

        //STEP 2
        int Arr[] = new int[iSize];

        //STEP 3   Accept elements of ARRAY
        System.out.println("Enter the elements");
        for(i=0;i<Arr.length ; i++)         //UPDATED
        {
            Arr[i] = sobj.nextInt();
        }
        //STEP 4   Display elements of ARRAY
        System.out.println("Elements of array are :");
        for(i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
                                            //STEP 5
    }
}