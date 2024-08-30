import java.util.*;
public class sbn {
    static boolean issbn(String num){
        Map<Character,Character> sbndict = new HashMap();
        sbndict.put('0','0');
        sbndict.put('1','1');
        sbndict.put('6','9');
        sbndict.put('8','8');
        sbndict.put('9','6');

        int n = num.length();
        for(int i=0,j=(n-1);i<=j;i++,j--){
            char cl=num.charAt(i);
            char cr=num.charAt(j);
            char mapping=sbndict.getOrDefault(cl,'-');

            if(mapping == '-'){
                return false;
            }
            if(mapping != cr){
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        String n = inp.nextLine();
        if(issbn(n)){
            System.out.print(issbn(n));
        }
        else{
            System.out.print(issbn(n));
        }
    }
}
