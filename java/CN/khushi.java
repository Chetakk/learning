public class khushi {
    public static void main(String[] args) {
        String name = "*Khushi <3*";
        int n = 6;
        for (int i = n / 2; i <= n; i += 2) {
            for (int j = 1; j < n - i; j += 2) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        for (int i = 1; i <= n * 2 - name.length() / 2; i++) {
            if (i == n - name.length() / 2) {
                System.out.print(name);
                i += name.length() - 1;
            } else {
                System.out.print("*");
            }
        }
        System.out.println();
        for (int i = n; i >= 1; i--) {
            for (int j = i; j < n; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= (i * 2) - 1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
