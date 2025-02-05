//Area of Rectangle
import java.util.*;

class Rectangle
{
    public int CalculateArea(int iLength , int iBreadth)
    {
        int Area = 0;
        Area = iLength * iBreadth;
        return Area;
    }
}

class program234
{
    public static void main(String args[])
    {
        
        int iNo1 = 0, iNo2 = 0 ;
        float iAns = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter length: ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter breadth: ");
        iNo2 = sobj.nextInt();

        Rectangle robj = new Rectangle();
        iAns = robj.CalculateArea(iNo1,iNo2);

        System.out.println("Area is :"+iAns);
    }
}