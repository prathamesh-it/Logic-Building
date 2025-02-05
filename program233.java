//Accept obtain marks accept total marks display percentage
import java.util.*;

class Calculation
{
    public float CalculatePercentage(int iObtained , int iTotal)
    {
        float fResult = 0.0f;
        fResult = ((float)iObtained / (float)iTotal) * 100;
        return fResult;
    }
}

class program233
{
    public static void main(String args[])
    {
        
        int iNo1 = 0, iNo2 = 0 ;
        float fAns = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Obtained Marks : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Total Marks : ");
        iNo2 = sobj.nextInt();

        Calculation cobj = new Calculation();
        fAns = cobj.CalculatePercentage(iNo1,iNo2);

        System.out.println("Percentage is :"+fAns);
    }
}