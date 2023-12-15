import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class meow {
    public static void main (String[] args) {
        // Your code here
        Scanner in = new Scanner(System.in);
        String s=in.next();
        String str="meow";
        boolean ans=false;
        for(int i=0;(i+3)<s.length();i++)
        {
            String st=s.substring(i,i+4);
            if(st.equalsIgnoreCase(str))
            {
                ans=true;
                break;
            }
        }
        if(ans)
        System.out.println("Yes");
        else
        System.out.println("No");
    }
}