import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = inp.nextInt();
        }

        int[] result = new int[arr.length];
        int index = 0;
        
        for(int num : arr){
            if(num % 2 == 0){
                result[index] = num;
                index++;
            }
        }

        for(int num : arr){
            if(num % 2 != 0){
                result[index] = num;
                index++;
            }
        }

        for(int num : result){
            System.out.print(num + " ");
        }
    }
}
