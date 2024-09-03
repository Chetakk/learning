import java.util.*;
public class simplesieve {
    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter a number :");
        int n = inp.nextInt();

        boolean bool[] = new boolean[n];
        
        for(int i = 0;i<n;i++){
            bool[i]=true;
        }

        for(int i = 2;i<Math.sqrt(n);i++){
            if(bool[i])
            for(int j = i*i;j<n;j=j+i){
                bool[j]=false;
            }
        }

        for(int i =2;i<n;i++){
            if(bool[i])
            System.out.println(i);
        }
        inp.close();
    }
}
