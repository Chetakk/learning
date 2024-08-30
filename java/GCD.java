import java.util.*;

public class GCD {
    public static int findValue(int a,int b){
        while(b!=0){
            int t = b;
            b = a%b;
            a = t;
        }
        return a;
    }
    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        int a = inp.nextInt();
        int b = inp.nextInt();
        System.out.print(findValue(a,b));
    }
}
