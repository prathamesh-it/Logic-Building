import java.util.*;

class Matrix
{
    public int Arr[][];

    public Matrix(int iRow , int iCol)
    {
        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        System.out.println("Please enter the value");

        Scanner sobj = new Scanner(System.in);
        int i = 0 , j = 0;

        for(i = 0 ; i <Arr.length ; i++)
        {
            for(j = 0 ; j< Arr[i].length ; j++)
            {
                Arr[i][j] = sobj.nextInt(); 
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are : ");
        int i = 0 , j = 0;

        for(i = 0 ; i <Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }

    }

    public int Summation()
    {
        int iSum = 0;
        int i = 0 , j = 0;

        for(i = 0 ; i <Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }
        return iSum;
    }

    public int CountEven()
    {
        int iCount = 0;
        int i = 0 , j = 0;

        for(i = 0 ; i <Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if((Arr[i][j] %2) == 0)
                {
                    iCount++;
                }
            }
        }
        return iCount;
    }

    public int SumEven()
    {
        int iSum = 0;
        int i = 0 , j = 0;

        for(i = 0 ; i <Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if((Arr[i][j] %2) == 0)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum;
    }

    public void DigitsCount()
    {
        int iCount = 0 , iNo = 0;
        int i = 0 , j = 0;

        for(i = 0 ; i <Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                iNo = Arr[i][j];
                while(iNo != 0)
                {
                    iCount++;
                    iNo = iNo/10;
                }
                System.out.println("Number of digits in "+Arr[i][j]+" is :" +iCount);
                iCount = 0;
            }
        }
        
    }

    public void DigitsSum()
    {
        int iSum = 0 , iNo = 0 , iDigit = 0;
        int i = 0 , j = 0;

        for(i = 0 ; i <Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                iNo = Arr[i][j];
                while(iNo != 0)
                {
                    iDigit = iNo %10;
                    iSum = iSum + iDigit;
                    iNo = iNo/10;
                }
                System.out.println("Sum of digits of "+Arr[i][j]+" is :" +iSum);
                iSum = 0;
            }
        }
        
    }

    public int Maximum()
    {
        int iMax = 0;
        int i = 0 , j = 0;

        iMax = Arr[0][0];

        for(i = 0 ; i <Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {

                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
                
            }
        }
        return iMax;
    }

    public int Minimum()
    {
        int iMin = 0;
        int i = 0 , j = 0;

        iMin = Arr[0][0];

        for(i = 0 ; i <Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {

                if(Arr[i][j] < iMin)
                {
                    iMin = Arr[i][j];
                }
                
            }
        }
        return iMin;
    }

    public void UpdateOdd()
    {
        int i = 0 , j = 0;

        for(i = 0 ; i <Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if((Arr[i][j] %2)==1)
                {
                    Arr[i][j]++;
                }
            }
        }
    }

    public void MaximumRow()
    {
        int iMax = 0;
        int i = 0 , j = 0;

        for(i = 0 ; i <Arr.length ; i++)
        {
            iMax = Arr[i][0];

            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }               
            }
            System.out.println("Maximum element from row no "+i+" is "+iMax);
        }
    }

    public void MinimumRow()
    {
        int iMin = 0;
        int i = 0 , j = 0;

        for(i = 0 ; i <Arr.length ; i++)
        {
            iMin = Arr[i][0];

            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if(Arr[i][j] < iMin)
                {
                    iMin = Arr[i][j];
                }               
            }
            System.out.println("Minimum element from row no " +i+" is "+iMin);
        }
    }

    public int SumDiagonal()
    {
        int iSum = 0;
        int i = 0 , j = 0;

        if(Arr.length != Arr[0].length)
        {
            System.out.println("Unable to perform addition of summation of diagonal element");
            return -1;
        }

        for(i = 0 ; i <Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if (i == j) 
                {
                    iSum = iSum + Arr[i][j];
                }               
            }
        }
        return iSum;
    }
   
}

class program616
{
    public static void main(String args[])
    {
        int iRow = 0 , iCol = 0 , iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number of rows :");
        iRow = sobj.nextInt();

        System.out.println("Please enter number of columns :");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow , iCol);

        mobj.Accept();
        mobj.Display();
        
       iRet = mobj.SumDiagonal();
       System.out.println("Addition of diagonal elements is :"+iRet);
    }
}