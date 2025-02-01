import java.util.*;

class TowerOfHanoi {
    static void hanoi(int n, char from, char to, char aux) {
        if (n > 0) {
            hanoi(n - 1, from, aux, to);
            System.out.println(from + " -> " + to);
            hanoi(n - 1, aux, to, from);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        hanoi(n, 'A', 'C', 'B');
        scanner.close();
    }
}