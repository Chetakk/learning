import java.util.Scanner;

public class StringExample {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = 10;
        String names[] = new String[num];
        String sname;

        System.out.println("Enter 10 names: ");
        for (int i = 0; i < num; i++) {
            names[i] = input.nextLine();
        }

        System.out.println("Enter the name to search: ");
        sname = input.nextLine();

        boolean found = false;
        for (int i = 0; i < num; i++) {
            if (names[i].contains(sname)) {
                System.out.println("Name found at position: " + (i + 1));
                found = true;
                break;
            }
        }

        if (!found) {
            System.out.println("Name not found");
        }

        input.close();
    }
}