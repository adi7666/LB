import java.util.Scanner;


class program242
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

        System.out.println("Addition of Digits : "+iRet);
        
    }
}

class Digits
{

    public int MultiplicationDigits(int iNo)
    {
        int iDigit = 0, iAdd =0;
        while(iNo != 0)
        {

            iDigit = iNo % 10;
            iAdd = iAdd + iDigit;                
            iNo = iNo/10;
        }
        return iAdd;   
    }

}

