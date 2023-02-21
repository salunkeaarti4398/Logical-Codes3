import java.util.*;


class Program255
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter  number : ");
        int iNo = sobj.nextInt();


        Numbers nobj = new Numbers();

        int iRet = nobj.FactorsMultiplication(iNo);
        System.out.println(" Multiplication of Factors of "+iNo+" is : "+iRet);
        
    }
}

class Numbers
{
    public int FactorsMultiplication(int iNo)
    {
        int iCnt = 0;
        int iMult = 1;


        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iMult = iMult * iCnt;
            }    
        }
       return iMult; 
    }
}