import java.util.Scanner;
public class A_Hulk
{
    public static void main(String args[])
    {
        Scanner in =new Scanner (System.in);
        String s1="I hate ";
        String s2="I love ";
        int n=in.nextInt();
        StringBuilder str= new StringBuilder();
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
            str.append(s1);
            else
            str.append(s2);
            if(i!=n)
            str.append("that ");
            else
            str.append("it");
        }
        System.out.println(str.toString());
    }
}