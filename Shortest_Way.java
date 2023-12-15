import java.util.*;
public class Shortest_Way
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
        long a=sc.nextLong();
        long b=sc.nextLong();
        long result=0;
        while(a>1&&b>1)
        {
            if(a>b)
            {
                result=result+a/b;
                a=a%b;
            }
            else
            {
                result=result+b/a;
                b=b%a;
            }
        }
        if(a!=1)
        {
            result+=a-1;
        }
        if(b!=1)
        {
            result+=b-1;
        }
        System.out.println(result);
        }
    }
}