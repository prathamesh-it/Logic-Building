import java.util.*;

class program556
{
    public static boolean BinarySearch(int Brr[] , int iNo)  
    {
        int iStart = 0 , iMid = 0 , iEnd = Brr.length-1;
        boolean bResult = false;

        while(iStart <= iEnd)
        {
            //      0     +  (7-0) / 2
            //      0     +   7 / 2
            //      0     +   3
            //           3
            iMid = iStart + (iEnd - iStart) / 2;

            if(Brr[iMid] == iNo)
            {
                bResult = true;
                break;
            }

            if(iNo > Brr[iMid])
            {
                iStart = iMid+1;
            }
            else
            {
                iEnd = iMid-1;
            }
        }
        return bResult;
    }

    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0 , iSize = 0 , iValue = 0;
        boolean bRet = false;

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the values");

        for(i = 0 ; i< iSize ; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Elements of the array are : ");

        for(i = 0 ; i< iSize ; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();

        System.out.println("Enter the element that you want to search : ");
        iValue = sobj.nextInt();

        bRet = BinarySearch(Arr , iValue);

        if(bRet == true)
        {
            System.out.println("Element is present in the array");
        }
        else
        {
            System.out.println("There is no such element in the array");
        }

    }
}