import java.util.*;

public class BalanceBact {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // inputing N number of patches of field
        int N = scanner.nextInt();

        // input each path
        Queue<Long> a = new LinkedList<>();
        for (int i = 0; i < N; i++) {
            long temp = scanner.nextLong();
            a.add(temp);
        }

        // start traversing the queue and tracking the processes in a List<Pair<Integer, Long>> => <power, multiplicity>
        List<Pair<Integer, Long>> processes = new ArrayList<>();
        long ans = 0;
        for (int i = 0; i < N; i++) {
            // get the first element
            long multiplicity = a.poll();

            // using processes to calculate the real multiplicity using the current multiplicity
            for (int j = processes.size() - 1; j >= 0; j--) {
                // update the multiplicity
                multiplicity += ((processes.get(j).getKey() - (N-i) + 1) * processes.get(j).getValue() * -1);
            }

            // if the multiplicity is 0, then we don't need to do anything
            if (multiplicity == 0) continue;
            // otherwise, we need to add the process to the vector
            ans += Math.abs(multiplicity);

            processes.add(new Pair<>(N-i, multiplicity));
        }

        System.out.println(ans);
        scanner.close();
    }
}

class Pair<K, V> {
    private K key;
    private V value;

    public Pair(K key, V value) {
        this.key = key;
        this.value = value;
    }

    public K getKey() {
        return key;
    }

    public V getValue() {
        return value;
    }
}
