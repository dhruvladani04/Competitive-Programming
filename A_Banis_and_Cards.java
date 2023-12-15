import java.util.*;
public class A_Banis_and_Cards
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0)
        {
            long n,m;
            n=in.nextLong();
            m=in.nextLong();
            long k=n/m;
            long ans=((k*(k+1))/2 * m);
            System.out.println(ans);
        }
    }
}