import java.util.Scanner;
public class A_Rigged
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        while(t>0)
        {
            int n=in.nextInt();
            int ps=0,pe=0,w=0,s,e;
            for(int i=0;i<n;i++)
            {
                s=in.nextInt();
                e=in.nextInt();
                if(i==0)
                {
                    ps=s;
                    pe=e;
                    w=s;
                }
                else
                {
                    if(s>=ps && e>=pe)
                    w=-1;
                }
            }
            System.out.println(w);
            t--;
        }
    }
}