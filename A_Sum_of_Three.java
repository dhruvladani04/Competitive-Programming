import java.util.*;
public class A_Sum_of_Three
{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        while(t>0){
            int n=in.nextInt();
            if(n<=6)
            {
                System.out.println("NO");
            }
            else
            {
                int a=1,b=2;
                for(int i=4;i<n;i++)
                {
                    if(i%3!=0){
                        int sum=a+b;
                        if((n-sum)%3==0)
                        b=i;
                        else if((n-sum)<=b)
                        {
                            System.out.println("NO");
                            break;
                        }
                        else
                        {
                            System.out.println("YES\n"+a+" "+b+" "+(n-sum));
                            break;
                        }
                    }
                }
            }
            t--;
        }
    }
}