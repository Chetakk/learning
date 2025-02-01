import java.io.*;

public class Main{
    public static int reversed(){
        int num = 1234;
        int rev=0;    
        while(num!=0){
            
            int digit = num %10; 

            rev = rev*10+digit;
            num= num/10;

        }
        return rev;
    }

    public static void main(String[] arg){
        System.out.println(reversed());
    }
}