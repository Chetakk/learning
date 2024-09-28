import java.net.*;
import java.io.*;
class NetworksClient{
    public static void main(String[] args){
        try{
            Socket s = new Socket("localhost", 1234); // creates the socket and connects to the server at localhost on port 1234
            OutputStream os = s.getOutputStream(); // gets the output stream of the socket
            OutputStreamWriter osw = new OutputStreamWriter(os); // creates an OutputStreamWriter to write characters to the output stream
            BufferedWriter bw = new BufferedWriter(osw); // wraps the OutputStreamWriter in a BufferedWriter to improve performance
            bw.write("Hello");
            bw.flush();
            os.close();
            s.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}