import java.util.Scanner;


class program247
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
        int iCnt5 =0, iCnt6=0, iCnt7 = 0, iCnt8 = 0;
        int iDigit = 0;
        while(iNo < 0)
        {
            iDigit =iNo % 10;
            if(iDigit == 5){
                iCnt5++;
            }
            if(iDigit == 6){
                iCnt6++;
            }
            if(iDigit == 7){
                iCnt7++;
            }
            if(iDigit == 8){
                iCnt8++;
            }
            iDigit= iNo / 10;

        }
        System.out.println("Frequency of 5 is : "+iCnt5);
        System.out.println("Frequency of 6 is : "+iCnt6);
        System.out.println("Frequency of 7 is : "+iCnt7);
        System.out.println("Frequency of 8 is : "+iCnt8);
        // System.out.println("Frequency of 9 is : "+iCnt);
    }
}

