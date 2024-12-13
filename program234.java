import java.util.*;

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
       Rectangle aobj = new Rectangle();
        fAns = aobj.CalculateArea(No, No2);
        System.out.println("Addition  is : "+fAns);
    }
}

class Rectangle {
    public int CalculateArea (int A, int B)
    {   
        int iArea = 0;
        iArea =A * B;
        return iArea;
    }
}

/* 
    
    nextInt()   int 
    nextFloat()  float
    nextDouble() Double
    nextLine()  char
    next

*/