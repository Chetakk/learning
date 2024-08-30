import java.util.*;
public class simplesieve {
    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter a number :");
        int n = inp.nextInt();

        boolean bool[] = new boolean[n];
        
        for(int i = 0;i<bool.length;i++){
            bool[i]=true;
        }

        for(int i = 2; i<Math.sqrt(n); i++){
            for(int j =(i*i);j<=n;j=j+i){
                bool[j]=false;
            }
        }

        for(int i = 2; i<bool.length;i++){
            if(bool[i]==true){
                System.out.println(i);
            }
        }
    }
}
