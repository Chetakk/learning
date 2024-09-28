import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;
public class SumServer {
    public static void main(String[] args) {
        try {
            ServerSocket serverSocket = new ServerSocket(5000);
            System.out.println("Server is listening on port 5000...");
            Socket socket = serverSocket.accept();
            System.out.println("Client connected!");
            DataInputStream in = new DataInputStream(socket.getInputStream());
            DataOutputStream out = new DataOutputStream(socket.getOutputStream());
            int n = in.readInt();
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += in.readInt(); 
            }
            out.writeInt(sum); 
            socket.close();
            serverSocket.close();
            } 
            catch (IOException e) {
            e.printStackTrace();
        }
    }
}
