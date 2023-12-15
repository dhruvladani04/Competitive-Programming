import java.util.*;
class Taxi_Cost
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t>0)
        {
            int n=in.nextInt();
            long x=in.nextLong();
            int a[]=new int[n];
            int c=0;
            long ans=0;
            for(int i=0;i<n;i++)
            {
                a[i]=in.nextInt();
            }
            if(n==1){
		        if(a[0]==0)
                {
		            System.out.println(0);
		        }
		        else
                {
		            System.out.println(x);
		        }
		    }
		    else
            {
		        long count = a[0] == 0 ? 1 : 0 ;
    		    for( int i = 1 ; i < n ; i++ )
                {
    		        if( a[i] == 0 && a[i-1] == 0 )
                    {
    		            count++;
    		        }
    		    }
    		    count = n - count ;
    		    count *= x;
    		    System.out.println( count );
		    }
            t--;
        }
    }
}