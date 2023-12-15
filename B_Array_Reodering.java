import java.util.*;
public class B_Array_Reodering
{
    public static int gcd(int a, int b) {
        return (b == 0) ? a : gcd(b, a % b);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            ArrayList<Integer> v = new ArrayList<>();
            ArrayList<Integer> w = new ArrayList<>();
            for (int p = 0; p < n; p++) {
                int x = scanner.nextInt();
                if (x % 2 != 0) {
                    w.add(x);
                } else {
                    v.add(x);
                }
            }
            int cnt = 0;
            cnt += v.size() * (v.size() - 1) / 2 + v.size() * w.size();
            for (int p = 0; p < w.size(); p++) {
                for (int q = p + 1; q < w.size(); q++) {
                    if (gcd(w.get(p), w.get(q)) > 1) {
                        cnt++;
                    }
                }
            }
            System.out.println(cnt);
        }
    }
}