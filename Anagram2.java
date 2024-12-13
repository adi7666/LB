import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;

public class Anagram2 {

public static boolean isanagram( String s)
{

    final String arr[] = s.split(" ");
    final String first = arr[0];
    final String second = arr[1];
    if(first.length() != second.length()){
        return false;
    }
    final Map map1 = new HashMap<String, Integer>();
    final Map map2 = new HashMap<String, Integer>();

    for(int i = 0; i<first.length(); i++)
    {
            final char key = first.charAt(i);
            if(map1.containsKey(key)){
               Integer counter = new Integer((Integer)map1.get(key));
               counter +=1;
               map1.put(key, counter);
            }
            else{
            map1.put(key, 1);
            }
    }
    for(int i = 0; i<second.length(); i++)
    {
            final char key = second.charAt(i);
            if(map2.containsKey(key)){
               Integer counter = new Integer((Integer)map2.get(key));
               counter +=1;
               map2.put(key, counter);
            }
            else
            {
                map2.put(key, 1);
            } 
    }
    System.out.println(map1);
    System.out.println(map2);

    if(map1.equals(map2)){
        return true; } 
    return false ;
}    public static void main(final String[] args) throws IOException {

       BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
       String str = r.readLine();
        final boolean result = isanagram(str);

        if(result)
        {
            System.out.println("It is anagram : "+result );
        }
        else{
            System.out.println("It is not anagram ");
        }
    }
}


