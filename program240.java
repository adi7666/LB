import java.util.Scanner;


class program241
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet= 0;
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();
        Digits dobj = new Digits();
        iRet = dobj.MultiplicationDigits(iValue);

        System.out.println("Multiplication of Digits : "+iRet);
        
    }
}

class Digits
{

    public int MultiplicationDigits(int iNo)
    {
        int iDigit = 0, iMult =1;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iMult = iMult * iDigit;
            iNo = iNo/10;
        }
        return iMult;   
    }

}

