import java.util.Scanner;
// Mistake
class ArrayX
{
    public int Arr[];
    public ArrayX(int iSize){

        Arr = new int[iSize];
    }
    public void Accept()
    {
        Scanner sobj =new Scanner(System.in);
        System.out.println("Enter the no. :");
        for(int i= 0; i<Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("ENtwer array");
        for(int i= 0; i<Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
   
    public void CountDigits()
    {
        int iCount =0;
        for(int i =0; i<Arr.length; i++)
        {
            while(Arr[i] != 0)
            {
                iCount++;
                Arr[i] = Arr[i] /10;
            }
            System.out.println(iCount);
            
        }    
    }
}


class program261
{
    public static void main(String Args[])
    {

        Scanner sobj = new Scanner(System.in);
        int iLength =0, iRet = 0;

        System.out.println("Enter The NUmber of Elements : ");          //Step 1
        iLength =sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);    

        aobj.Accept();
        aobj.Display();
        aobj.CountDigits();

    }
}

