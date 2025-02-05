//Area of Rectangle
import java.util.*;

class Rectangle
{
    public float CalculateArea(float fLength , float fBreadth)
    {
        float Area = 0;
        Area = fLength * fBreadth;
        return Area;
    }
}

class program235
{
    public static void main(String args[])
    {
        
        float fNo1 = 0.0f, fNo2 = 0.0f ;
        float fAns = 0.0f;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter length: ");
        fNo1 = sobj.nextFloat();

        System.out.println("Enter breadth: ");
        fNo2 = sobj.nextFloat();

        Rectangle robj = new Rectangle();
        fAns = robj.CalculateArea(fNo1,fNo2);

        System.out.println("Area is :"+fAns);
    }
}