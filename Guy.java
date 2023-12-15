import java.util.*;
public class Guy
{
    public static void main(String args[])
    {
        int[] array = new int[250];
        int n, p, q;
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        p = scanner.nextInt();
        int count = 0;
        for (int i = 0; i < p; i++) {
            array[i] = scanner.nextInt();
        }
        q = scanner.nextInt();
        for (int i = p; i < p + q; i++) {
            array[i] = scanner.nextInt();
        }
        Arrays.sort(array, 0, p + q);
        for (int i = 0; i < p + q - 1; i++) {
            if (array[i] != array[i + 1]) {
                count++;
            }
        }
        if (n == count) {
            System.out.println("I become the guy.");
        } else {
            System.out.println("Oh, my keyboard!");
        }
    }
}