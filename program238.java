import java.util.Scanner;


class program239
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        int iRet = nobj.EvenFactors(iValue);

        System.out.println("Addition of Even Factors : "+iRet);


    }
}

class Number
{
    public int EvenFactors(int iNo)
    {
        int iCnt =0, res =0;
        if(iNo % 2 !=0)
        {
            return 0;
        }
        for(iCnt = 1; iCnt<= (iNo/ 2); iCnt++)
        {
            if(iNo % iCnt == 0){
                if(iCnt % 2 == 0)
                {
                    res =+ iCnt;
                } 
            }
            
        }
        return res;
    }
}
