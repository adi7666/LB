import java.util.*;

class claculation {
    public float CalculatePercentage(int A, int B){
        float fResult = 0.0f;
        fResult = (float)(A / B) * 100;
        return fResult;
    }
}
class program227{
    public static void main(String Args[])
    {
        int No = 0, No2=  0;
        float fAns = 0.0f;
        Scanner dobj = new Scanner(System.in);
        System.out.println("ENter  First number");
        No = dobj.nextInt();

        System.out.println("Enter Second Number :");
        No2 = dobj.nextInt();
        
        // Arthmatic aobj;
        claculation aobj = new claculation();
        fAns = aobj.CalculatePercentage(No, No2);
        System.out.println("Addition  is : "+fAns);
    }
}

/* 
    
    nextInt()   int 
    nextFloat()  float
    nextDouble() Double
    nextLine()  char
    next

*/