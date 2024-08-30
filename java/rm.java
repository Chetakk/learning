import java.io.*;
import java.util.*;

class rm{
    static int findMinX(int num[],int rem[],int k){
        int x = 1;
        while(true){
            int j;
            for(j=0;j<k;j++){
                if(x % num[j] != rem[j]){
                    break;
                }
            }
            if(j == k){
                return x;
            }
            x++;
        }
    }

    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        int size = inp.nextInt();
        int arr[] = new int[size];
        int r[] =  new int[size];

        for(int i = 0; i<size;i++){
            arr[i]=inp.nextInt();
        }
        for(int j = 0; j<size;j++){
            r[j]=inp.nextInt();
        }
        System.out.print(findMinX(arr,r,size));
    }
}