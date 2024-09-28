import java.net.*;
import java.io.*;
class NetwroksServer{
    public static void main(String[] args){
        try{
            ServerSocket ss = new ServerSocket(1234);
            Socket s = ss.accept();
            InputStream is = s.getInputStream();
            InputStreamReader isr = new InputStreamReader(is);
            BufferedReader br = new BufferedReader(isr);
            String str = br.readLine();
            System.out.println("Message : "+str);
            ss.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
