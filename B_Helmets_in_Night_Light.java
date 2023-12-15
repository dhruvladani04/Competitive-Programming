import java.util.Scanner;
public class B_Helmets_in_Night_Light{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        while(t>0){
            int n,p;
            n=in.nextInt();
            p=in.nextInt();
            int a[]=new int[n];
            int b[]=new int[n];
            for(int i=0;i<n;i++)
            a[i]=in.nextInt();
            for(int i=0;i<n;i++)
            b[i]=in.nextInt();
            for(int i=0;i<n-1;i++){
                for(int j=0;j<n-1-i;j++){
                if(b[j]>b[j+1])
                {
                    int temp=a[j];
                    int temp1=b[j];
                    b[j]=b[j+1];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    b[j+1]=temp1;
                }
            }
            }
            int ans=0;
            int c=n;
            if(p>b[0]){
            ans=p;
            c=n-1;
            for(int j=0;j<n;j++)
            {
                if(c==0)
                break;
                else
                {
                    if(a[j]<=c)
                    {
                        ans=ans+(b[j]*a[j]);
                        c=c-a[j];

                    }
                    else
                    {
                        ans=ans+(c*b[j]);
                        c=0;
                    }
                }
            }}
            else if(p==b[0])
            {
                int ans1=p*n;
                ans=p;
                c=n-1;
            for(int j=0;j<n;j++)
            {
                if(c==0)
                break;
                else
                {
                    if(a[j]<=c)
                    {
                        ans=ans+(b[j]*a[j]);
                        c=c-a[j];

                    }
                    else
                    {
                        ans=ans+(c*b[j]);
                        c=0;
                    }
                }
            }
            ans=Math.min(ans,ans1);
            }
            else
            {
                ans=p*n;
            }
            System.out.println(ans);
            t--;
        }
    }
}
