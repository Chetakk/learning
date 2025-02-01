import java.util.*;

public class Celebrity {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int Mat[][] = new int[n][n];
        int c = 0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                Mat[i][j] = s.nextInt();

        for (int i = 1; i < n; i++)
            if (Mat[c][i] == 1)
                c = i;

        for (int i = 0; i < n; i++)
            if (i != c && (Mat[c][i] == 1 || Mat[i][c] == 0)) {
                System.out.println("No Celebrity");
                return;
            }
        System.out.println(c);
    }
}

