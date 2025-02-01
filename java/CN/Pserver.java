import java.io.*;
import java.net.*;
import java.util.*;
public class Pserver{
    public static void main(String[] args){
        try{
            ServerSocket ss = new ServerSocket(5001);
            System.out.println("Waiting....");
            Socket socket = ss.accept();
            System.out.println("Conncect to Client!");
            BufferedReader input = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            BufferedReader userinput = new BufferedReader(new InputStreamReader(System.in));
            PrintWriter output = new PrintWriter(socket.getOutputStream(),true);

            String numbers = input.readLine();
            String str[] = numbers.split(" ");
            int sum = 0;
            for(int i = 0; i < str.length; i++){
                sum+=Integer.parseInt(str[i],10);
            }

            output.println(Integer.toString(sum));

            input.close();
            output.close();
            socket.close();
            ss.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
