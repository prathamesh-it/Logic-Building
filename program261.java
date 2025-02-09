//Accept N numbers and perform addition of N numbers

import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        int i = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements : ");

        for(i = 0 ; i<Arr.length ; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of the array are: ");
        int i = 0;
        for(i = 0 ; i<Arr.length ; i++)
        {
            System.out.println(Arr[i]);
        }
    }

    public int Summation()
    {
        int iSum = 0, i = 0;
        for(i = 0;i<Arr.length;i++)
        {
            iSum = iSum + Arr[i];
        }
        return iSum;
    }
    
   
}

class program261
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0, i = 0,iRet = 0;

        System.out.println("Enter number of elements :");   //Dynamic allocation
        iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept();
        aobj.Display();
        iRet = aobj.Summation();

        System.out.println("Summation of all elements : " +iRet);

    }
}