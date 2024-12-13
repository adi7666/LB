import java.util.*;
class program230{

    public static int Addition (int A, int B){
        int Result = 0;
        Result = A + B;
        return Result;
    }
    public static void main(String Args[])
    {
        int No = 0, No2=  0 , Ans = 0;
        Scanner dobj = new Scanner(System.in);
        System.out.println("ENter  First number");
        No = dobj.nextInt();

        System.out.println("Enter Second Number :");
        No2 = dobj.nextInt();

        Ans = Addition(No, No2);
        System.out.println("Addition  is : "+Ans);
    }
}

/* 
    
    nextInt()   int 
    nextFloat()  float

*/