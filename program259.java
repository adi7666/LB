import java.util.Scanner;

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
   
    public int Summation()
    {
        int i =0 , iSum  = 0;
        for (i = 0; i<Arr.length;i++)
        {
            iSum = iSum + Arr[i];
        }
        return iSum;
    }
}


class program259
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

        iRet = aobj.Summation();
        System.out.println("Summation of all element are  "+iRet );
    }
}

