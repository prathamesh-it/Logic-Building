//Input : 883042
//Output : 0:1
//          2:1
//          3:1
//          4:1
//          8:2

// We calculate Frequency of 9

import java.util.*;

class Digits
{
    public void CountDigits(int iNo)
    {
        int iCount = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit==9)
            {
                iCount++;
            }
            iNo=iNo/10;
        }
        System.out.println("Frequency of 9 is :" +iCount);
    }
    
}

class program247
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        
        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        dobj.CountDigits(iValue);

    }
}