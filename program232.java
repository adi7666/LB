import java.util.*;

class Arithematic {
    public int Addition (int A, int B){
        int Result = 0;
        Result = A + B;
        return Result;
    }
}
class program227{
    public static void main(String Args[])
    {
        int No = 0, No2=  0 , Ans = 0;
        Scanner dobj = new Scanner(System.in);
        System.out.println("ENter  First number");
        No = dobj.nextInt();

        System.out.println("Enter Second Number :");
        No2 = dobj.nextInt();
        
        // Arthmatic aobj;
        Arithematic aobj = new Arithematic();
        Ans = aobj.Addition(No, No2);
        Ans = No + No2;
        System.out.println("Addition  is : "+Ans);
    }
}

/* 
    
    nextInt()   int 
    nextFloat()  float

*/