import java.util.*;
public class A_Don_t_Try_to_Count{
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-->0) {
            int n, m;
            n = scanner.nextInt();
            m = scanner.nextInt();
            String x, s;
            x = scanner.next();
            s = scanner.next();
            int count = 0;
            int k = x.length();
            if (n == m) {
                if (x.indexOf(s) != -1)
                    System.out.println(0);
                else {
                    x = x + x;
                    if (x.indexOf(s) == -1)
                        System.out.println(-1);
                    else
                        System.out.println(1);
                }
            } else if (n > m) {
                if (x.indexOf(s) != -1)
                    System.out.println(0);
                else {
                    x = x + x;
                    if (x.indexOf(s) == -1)
                        System.out.println(-1);
                    else
                        System.out.println(1);
                }
            } else {
                while (s.length() > x.length()) {
                    x = x + x;
                    count++;
                }
                if (x.indexOf(s) != -1)
                    System.out.println(count);
                else {
                    x = x + x;
                    count++;
                    if (x.indexOf(s) == -1)
                        System.out.println(-1);
                    else
                        System.out.println(count);
                }
            }
        }
    }
}