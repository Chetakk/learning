import java.util.*;

public class Queue {
    public static void main(String[] args) {
        PriorityQueue<int[]> pq = new PriorityQueue<>(Comparator.comparingInt(a -> -a[1]));

        // Push elements (insert in ascending priority order)
        pq.offer(new int[] { 10, 2 });
        pq.offer(new int[] { 20, 1 });
        pq.offer(new int[] { 30, 3 });

        // Peek (view element with highest priority without removing)
        System.out.println("Peek: " + pq.peek()[0]);

        // Pop elements (remove and return elements in priority order)
        while (!pq.isEmpty())
            System.out.println("Pop: " + pq.poll()[0]);
    }
}