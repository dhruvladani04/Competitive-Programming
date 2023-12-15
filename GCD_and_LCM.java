import java.util.*;
public class GCD_and_LCM
{
    public static int gcd(int x,int y)
    {
        int gcd =1;
        for(int i = 1; i <= x && i <= y; i++)  
        {  
        //returns true if both conditions are satisfied   
        if(x%i==0 && y%i==0)  
        //storing the variable i in the variable gcd  
        gcd = i;  
        }  
        return gcd;
    }
    public static int lcm(int x, int y){
        return (x*y)/gcd(x,y);
    }
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
		int t=in.nextInt();
		while(t-->0)
		{
		    int x,y;
		    x=in.nextInt();
		    y=in.nextInt();
		    int k=in.nextInt();
		    int mini=Integer.MAX_VALUE;
		    while(k-->0)
		    {
		        int g=gcd(x,y);
                // if(x<y)
		    }
		    System.out.println(mini);
		}
    }
}