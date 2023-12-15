import java.util.*;
public class C_Yarik_and_Array
{
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-->0) 
        {
            int n = in.nextInt();
            ArrayList<Integer> l = new ArrayList<>();
            for (int i = 0; i < n; i++)
                l.add(in.nextInt());
            int i = 1;
            int sum = l.get(0);
            int maxi = Collections.min(l);
            while (i < n) 
            {
                if (sum < 0)
                    sum = 0;
                else if (Math.abs(l.get(i)) % 2 != Math.abs(l.get(i - 1)) % 2) 
                {
                    sum += l.get(i);
                    maxi = Math.max(maxi, Math.max(sum, l.get(i)));
                    i++;
                } 
                else 
                {
                    sum = l.get(i);
                    i++;
                }
            }
            System.out.println(Math.max(maxi, Collections.max(l)));
        }
    }
}