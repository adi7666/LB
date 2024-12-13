
class pr{
    public static boolean isPalidrome(String a){
        int start=0;
        int end =a.length()-1;

        while(start<end){
            if(a.charAt(start)==a.charAt(end)){
                start++;
                end--;

            }
            else{
                return false;
                
            }

        }
        return true;
    }
    public static void main(String args[])
    {   
        String s = new String("nitin");
        // String a = new String("aditya");
        // a = "Sumedha";
        
        // int temp = "";
        // temp = a;
        // temp = s;
        boolean result = isPalidrome(s);
        if(result){System.out.println("S is palindrome :"+result);}
        else{
            System.out.println("it not ");
        }
        

        System.out.println(s);
        
        

        // System.out.println(s.equalsIgnoreCase(a));
    } 
}