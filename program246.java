import java.util.Scanner;


class program246
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();
        Digits dobj = new Digits();
        dobj.CountDigits(iValue);

    
        
    }
}

class Digits
{
    public void CountDigits(int iNo)
    {
        int iCnt=0;
        int iDigit = 0;
        while(iNo < 0)
        {
            iDigit =iNo % 10;
            if(iDigit == 9){
                iCnt++;
            }
            iDigit= iNo / 10;

        }
        System.out.println("Frequency of 9 is : "+iCnt);
    }
}

