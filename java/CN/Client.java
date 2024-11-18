import java.io.*;
import java.util.*;
import java.net.*;

public class Client{
    public static void main(String[] args){
        try{
            Scanner sc = new Scanner(System.in);
            Socket socket = new Socket("localhost",5000);
            System.out.println("Server Connnected!");
            PrintWriter pw = new PrintWriter(socket.getOutputStream(), true);
            BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            BufferedReader userInput = new BufferedReader(new InputStreamReader(System.in));
            String numbers = "10 20 30 40";
            pw.println(numbers);
            System.out.println(br.readLine());
            pw.close();
            sc.close();
            socket.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}