import java.util.*;

public class Main{
    static int GCD(int a,int b){
        if(a==0){
            return b;
        }
        return GCD(b%a,a);
    }

    static int phi(int n){
        int result=1;
        for(int i =2; i<n;i++){
            if(GCD(i,n)==1)
            result++;
        }
        return result;
    }

    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        int a = inp.nextInt();
        System.out.print(phi(a));
        inp.close();
    }
}
