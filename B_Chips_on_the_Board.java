import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class B_Chips_on_the_Board {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long t = scanner.nextLong();
        while (t-->0) {
            long n, sum = 0, sum2 = 0;
            n = scanner.nextLong();
            ArrayList<Long> a = new ArrayList<>();
            ArrayList<Long> b = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                long num = scanner.nextLong();
                a.add(num);
                sum += num;
            }
            for (int i = 0; i < n; i++) {
                long num = scanner.nextLong();
                b.add(num);
                sum2 += num;
            }
            Collections.sort(a);
            Collections.sort(b);
            long mini = Math.min((a.get(0) * n) + sum2, (b.get(0) * n) + sum);
            System.out.println(mini);
        }
    }
}