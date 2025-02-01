import java.util.*;

public class test{
    public boolean dup(int[] nums){
        for(int i = 0; i < nums.length -1; i++){
            for(int j = i + 1; j < nums.length; j++){
                if(nums[i] == nums[j])
                    return true;
            }
        }
        return false;
    }

    public static void main(String[] args){
        int arr[] = {2,3,4,5,2};
        test t1 = new test();
        if(t1.dup(arr)){
            System.out.print("Loop Detected");
        }
        else{
            System.out.print("Maa chuda");
        }
    }
}