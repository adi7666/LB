import java.util.Scanner;


class program251
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
        int iCount[] = {0,0,0,0,0,0,0,0,0,0};
        int iDigit = 0, i = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount[iDigit]++;
            iNo = iNo / 10;
        }

        for(i = 0; i<= 9; i++)
        {
            if(iCount[i] != 0)
            {
                System.out.println("Frequency of "+i+" is : "+iCount[i]);
            }
        }
    }
}

