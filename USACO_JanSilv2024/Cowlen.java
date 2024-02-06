import java.util.*;

public class Cowlen {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] a = new int[N];
        int minA = Integer.MAX_VALUE;
        for (int i = 0; i < N; i++) {
            a[i] = scanner.nextInt();
            minA = Math.min(minA, a[i]);
        }

        int maxL = minA / 4;

        long ans = 0;
        TreeSet<Integer> b = new TreeSet<>();
        for (int i = maxL; i > 0; i--) {
            b.clear();
            for (int x : a) {
                b.add(x % i);
                if (b.size() > 3) {
                    break;
                }
            }
            if (b.size() <= 3) {
                ans += i;
            }
        }

        System.out.println(ans);
    }
}
