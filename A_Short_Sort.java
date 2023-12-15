import java.util.Scanner;
public class A_Short_Sort
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        String ans="abc";
        while(t>0){
            String s=in.next();
            int f=0;
            for(int i=0;i<3;i++)
            {
                if(s.charAt(i)==ans.charAt(i))
                f=1;
            }
            if(f==0)
            System.out.println("NO");
            else
            System.out.println("YES");
            t--;
        }
    }
}