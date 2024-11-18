import java.io.*;
import java.util.*;
import java.net.*;

public class Server{
    public static void main(String[] args){
        try{
            ServerSocket ss = new ServerSocket(5000);
            Socket socket = ss.accept();
            System.out.println("Server is listening on port 5000...");
            PrintWriter pw = new PrintWriter(socket.getOutputStream(),true);
            BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            String message = in.readLine();
            String arr[] = message.split(" ");
            int sum = 0;
            for(int i=0;i<arr.length;i++){
                sum+=Integer.parseInt(arr[i],10);
            }
            pw.println(Integer.toString(sum));
            in.close();
            ss.close();
            socket.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}