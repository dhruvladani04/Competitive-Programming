import java.util.*;
public class greatest_binary_string {
    public static String maximumBinaryString(String bString)
	{
	    // write your code here.
		StringBuilder x = new StringBuilder();
        
        // Create a variable countZeros to count the total number of 0's in the string.
        int countZeros = 0;

        // Create a variable start to find the index of the first leftmost '0' in the given string.
        int start  = -1;

        // Find the location of the first leftmost '0' in the string.
        for (int i=0;i<bString.length();i++) {
            if (bString.charAt(i) == '0') {
                start = i;
                break;
            }
        }

        // If string contains all 1's then the string is maximum in itself.
        if (start==-1) {
            return bString;
        }

        // Count the total number of 0's in the string
        for(int i=0;i<bString.length();i++)
        {
            if (bString.charAt(i) == '0') {
                countZeros++;
            }
        }

        for(int i=0;i<bString.length();i++)
        x.append('1');

        x.setCharAt(countZeros - 1 + start, '0');
        return x.toString();
	}
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0)
        {
            String s=sc.next();
            System.out.println(maximumBinaryString(s));
            t--;
        }
    }
}
