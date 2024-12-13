import java.util.Scanner;


class program240
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
        int  iAdd =0;
        while(iNo != 0)
        {    
            iAdd = iAdd + (iNo % 10);                
            iNo = iNo/10;
        }
        return iAdd;   
    }

}

