import java.io.*;
import java.util.Scanner;

public class Bubblesort{
    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter the Number :");
        int n = inp.nextInt();
        int temp=0;
        int arr[] = new int[n];
        for(int i = 0; i < n ; i++){
            arr[i]=inp.nextInt();
        }
        for(int i = 0; i < n ; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[j]<arr[i]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        System.out.println("Sorted Array : ");
        for(int i = 0; i < n ; i++){
            System.out.print(arr[i]+" ");
        }
    }
}