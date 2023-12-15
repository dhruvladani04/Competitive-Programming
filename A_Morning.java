import java.util.*;

public class A_Morning {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            String s = in.next();
            int prev=1,curr,ans=0;
            for(int i=0;i<4;i++)
            {
                curr=s.charAt(i)-'0';
                if(curr==0)
                curr=10;
                ans+=Math.abs(curr-prev)+1;
                prev=curr;
            }
            System.out.println(ans);
        }
    }
}