import java.io.*;
import java.net.*;

public class Pclient{
    public static void main(String[] args){
        try{
            Socket socket = new Socket("localhost",5001);
            System.out.println("Connected to Server");
            PrintWriter output = new PrintWriter(socket.getOutputStream(),true);
            BufferedReader input = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            BufferedReader userinput = new BufferedReader(new InputStreamReader(System.in));

            output.println("10 20 30 40");
            System.out.println(input.readLine());
            input.close();
            userinput.close();
            output.close();
            socket.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}