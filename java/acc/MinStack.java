import java.util.*;

public class MinStack{
    public static void main(String[] args){
        int[] arr = {22,3,43,35,26};
        int[] arr2 = Arrays.copyOf(arr,arr.length-1);

        System.out.println(Arrays.toString(arr2));

        Arrays.sort(arr2);
        System.out.print(arr2[0]);
    }
}