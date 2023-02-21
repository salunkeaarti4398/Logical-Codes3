import java.util.*;


class Program256
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter  number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        boolean bRet = dobj.CheckArmStrong(iNo);

        if(bRet == true)
        {
            System.out.println(iNo+" is Amstrong Number");
        }
        else
        {
            System.out.println(iNo+" is Not Amstrong Number");
        }
        
    }
}

class Digits
{
    private int CountDigits(int iNo)
    {
        int iCnt = 0;
        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;
    }

    private int Power(int Base, int index)   // Base = 4   index = 5
    {
        int iAns = 1;

        for(int iCnt = 1; iCnt <= index; iCnt ++)
        {
            iAns = iAns * Base;
        }
        return iAns;
    }

    public boolean CheckArmStrong(int iNo)
    {
        int iTemp = iNo;
        int iSum = 0, iDigit = 0;

        int index = CountDigits(iNo);

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            int iRet = Power(iDigit,index);
            iSum = iSum + iRet;

            iTemp = iTemp / 10;
        }
        
        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}