import java.util.*;
public class E_Queue_Sort 
{
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-->0) {
            int n = in.nextInt();
            List<Integer> l = new ArrayList<>();
            for (int i = 0; i < n; i++) 
            {
                l.add(in.nextInt());
            }
            if (isSorted(l))
                System.out.println(0);
            else 
            {
                int mini = Collections.min(l);
                int index = l.indexOf(mini);
                if (isSorted(l.subList(index, l.size())))
                    System.out.println(index);
                else 
                    System.out.println(-1);
            }
        }
    }
    public static boolean isSorted(List<Integer> list) 
    {
        for (int i = 1; i < list.size(); i++)
        {
            if (list.get(i) < list.get(i - 1)) 
                return false;
        }
        return true;
    }
}