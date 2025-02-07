//Accept N numbers and perform addition of N numbers
import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }
}


class program257
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0, i = 0;

        System.out.println("Enter number of elements :");   //Dynamic allocation
        iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        

    }
}