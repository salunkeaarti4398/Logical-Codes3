import java.util.*;

class Program252
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number :");
        int iNo = sobj.nextInt();

        Numbers eobj = new Numbers();

        eobj.EvenFactorsDisplay(iNo);
    }
}

class Numbers
{
    public void EvenFactorsDisplay(int iValue)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (iValue / 2); iCnt++)
        {
            if(((iValue % iCnt) == 0)) && (iCnt % 2 == 0) )
            {
                
                System.out.println("Even Factor is : "+iCnt);
                
            }
        }
    }
}