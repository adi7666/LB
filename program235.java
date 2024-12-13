import java.util.*;

class program227{
    public static void main(String Args[])
    {
        float fNo = 0.0f, fNo2=  0.0f;
        float fAns = 0.0f;
        Scanner dobj = new Scanner(System.in);
        System.out.println("ENter  First number");
        fNo = dobj.nextInt();

        System.out.println("Enter Second Number :");
        fNo2 = dobj.nextInt();
        
        // Arthmatic aobj;
       Rectangle aobj = new Rectangle();
        fAns = aobj.CalculateArea(fNo, fNo2);
        System.out.println("Addition  is : "+fAns);
    }
}

class Rectangle {
    public float CalculateArea (float A, float B)
    {   
        float fArea = 0.0f;
        fArea =A * B;
        return fArea;
    }
}

/* 
    
    nextInt()   int 
    nextFloat()  float
    nextDouble() Double
    nextLine()  char
    next

*/