import java.util.*;
class Substring {
    public static boolean allSame(String s)
    {
        int c1=0,c2=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(ch=='0')
                c1++;
            else if(ch=='1')
                c2++;
        }
        if(c1==s.length() || c2==s.length())
            return true;
        return false;
    }
    public static int minChanges(String s) {
        if(allSame(s))
        {
            return 0;
        }
        else{
        int n = s.length();
        int changesToMakeEven0 = 0; // Changes needed for even-indexed characters to be 0
        int changesToMakeEven1 = 0; // Changes needed for even-indexed characters to be 1

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (s.charAt(i) != '0') {
                    changesToMakeEven0++;
                } else {
                    changesToMakeEven1++;
                }
            }
        }

        // Calculate the minimum changes required for even-indexed characters
        int minChangesForEven = Math.min(changesToMakeEven0, changesToMakeEven1);

        // Calculate the minimum changes required for odd-indexed characters
        int minChangesForOdd = n / 2 - minChangesForEven;

        // Return the sum of changes for both even and odd indices
        return minChangesForEven + minChangesForOdd;}
    }
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        while(t-->0)
        {
            String s=in.next();
            System.out.println(minChanges(s));
        }
    }
}