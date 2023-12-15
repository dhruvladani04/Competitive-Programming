import java.util.*;
public class Dice_Number{
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner in = new Scanner(System.in);
		int t=in.nextInt();
		while(t>0)
		{
		    int a[]=new int[3];
		    int b[]=new int[3];
		    for(int i=0;i<3;i++)
		    a[i]=in.nextInt();
		    for(int i=0;i<3;i++)
		    b[i]=in.nextInt();
		    Arrays.sort(a);
		    Arrays.sort(b);
		    String sa="",sb="";
		    for(int i=0;i<3;i++)
		    {
		        sa=String.valueOf(a[i])+sa;
		        sb=String.valueOf(b[i])+sb;
		    }
		    int na=Integer.parseInt(sa);
		    int nb=Integer.parseInt(sb);
		    if(na==nb)
		    System.out.println("TIE");
		    else if(na<nb)
		    System.out.println("BOB");
		    else
		    System.out.println("ALICE");
		    t--;
		}
	}
}