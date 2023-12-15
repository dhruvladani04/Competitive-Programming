import java.util.Scanner;

public class A_Simple_Design
{
    public static long digitsSum(long x)
    {
        long ans=0;
        while(x!=0)
        {
           ans+=x%10;
           x=x/10;
        }
        return ans;
    }
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        while(t-->0)
        {
            long x,k;
            x=in.nextLong();
            k=in.nextLong();
            boolean con=true;
            long ans=x;
            while(con){
                if(digitsSum(x)%k==0)
                {
                    con=false;
                    ans=x;
                }
                x++;
            }
            System.out.println(ans);
        }
    }
}