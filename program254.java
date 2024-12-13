import java.util.Scanner;


class program254
{
    public static void main(String Args[])
    {

        Scanner sobj = new Scanner(System.in);
        int iSize =0;

        System.out.println("Enter The NUmber of Elements : ");
        iSize =sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the Elements");

        for(int i = 0; i<iSize; i++)
        {
            Arr[i] = sobj.nextInt();

        }

        System.out.println("Element of Array are : ");
        for(int  i = 0; i<iSize; i++)
        {
            System.out.println(Arr[i]);
        }
    
    }
}

