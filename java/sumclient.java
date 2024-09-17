import java.io.*;
import java.util.*;
import java.net.*;

public class sumclient{
    public static void main(String[] args){
        try{
            Socket socket = new Socket("localhost",5000);
            System.out.println("Connected to the server");
            DataInputStream input = new DataInputStream(socket.getInputStream());
            DataOutputStream output = new DataOutputStream(socket.getOutputStream());
            int numbers[] = {10,20,30,40,50};
            int n = numbers.length;
            output.writeInt(n);
            for(int number : numbers){
                output.writeInt(number);
            }
            int sum = input.readInt();
            System.out.println("Sum of numbers received from server: "+sum);
            input.close();
            output.close();
            socket.close();
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
}
