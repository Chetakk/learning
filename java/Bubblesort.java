import java.util.Scanner;

public class Bubblesort{
    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter the number : ");
        int n = inp.nextInt();
        int a[] = new int[n];
        for(int i = 0;i<n;i++){
            System.out.printf("Enter element [%d] : ",i+1);
            a[i] = inp.nextInt();
        }
        for(int i =0;i<n;i++)
        {
            for(int j = 0; j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    int temp = a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        System.out.println("Sorted Array :");
        for(int i = 0;i<n;i++){
            System.out.print(a[i]+" ");
        }
        inp.close();
    }
}