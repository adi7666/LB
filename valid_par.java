import java.io.*;
import java.util.*;
public class valid_par {

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        String s =  sobj.nextLine();
        // String s = new String("((){}}[])");

        boolean res = isValid(s);

        if(res){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
        
        
         
    }
    public static boolean isValid(String s)
    {
        Stack<Character> st= new Stack<Character>();

        for( char i:s.toCharArray()){
            if(i=='(' || i=='{' || i=='['){
             st.push(i);
            }else if(i==')' || i=='}' || i==']'){
             char poppedItem=st.pop();
             if(( i==')' && poppedItem!='(')   ||  ( i==')' && poppedItem!='(') ||   ( i==']' && poppedItem!='[')){
                 return false;
             }
 
            }
         }
         return true;
    }
}
