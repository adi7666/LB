import java.io.*;
import java.util.*;
public class anagram_1 {
    public static void main(String[] args) throws IOException
    {
            
            // InputStreamReader r = new 
            BufferedReader r = new BufferedReader (new InputStreamReader(System.in));
            String s = r.readLine();
            


           boolean bRet =  anagram(s);
           if(bRet){
            System.out.println("Yes  "+bRet);
           }
           else{
            System.out.println("it is not anagram ");
           }
    
}
public static boolean anagram(String s)
{
    String[] arr = s.split( " ");
            String First = arr[0];
            String Second = arr[1];
            if(First.length() != Second.length())
            {
                return false;
            }
            char[] a = First.toCharArray();
            char[] b = Second.toCharArray();

            Arrays.sort(a);
            Arrays.sort(b);

            System.out.println(a);
            System.out.println(b);

            for(int i =0; i< a.length; i++){
                if(a[i] != b[i]){
                    
                    return false;
                }

            }
            return Arrays.equals(a, b);
        }
        
}
