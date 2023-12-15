import java.util.Scanner;

public class B_Rule_of_League {
    public static void printPattern(int temp, int x) {
        int count = 1;
        while (temp-- > 0) {
            for (int i = 1; i <= x; i++) {
                System.out.print(count + " ");
            }
            if (count == 1) {
                count++;
            }
            count += x;
        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            int x = in.nextInt();
            int y = in.nextInt();
            if (x == 0 && y == 0) {
                System.out.println(-1);
            } else if (x > 0 && y > 0) {
                System.out.println(-1);
            } else {
                if (x == 0) {
                    int temp = (n - 1) / y;
                    printPattern(temp, y);
                } else if ((n - 1) % x == 0) {
                    int temp = (n - 1) / x;
                    printPattern(temp, x);
                } else {
                    System.out.println(-1);
                }
                System.out.println();
            }
        }
    }
}

