public class cyphar {
    public String dec(String text, int shift) {
        String res = "";
        for (int i = 0; i < text.length(); i++) {
            char c = text.charAt(i);
            if (Character.isLetter(c)) {
                char base = Character.isUpperCase(c) ? 'A' : 'a';
                c = (char) ((c - base - shift + 26) % 26 + base);
            }
            res += c;
        }
        return res;
    }

    public String enc(String text, int shift) {
        String res = "";
        for (int i = 0; i < text.length(); i++) {
            char c = text.charAt(i);
            if (Character.isLetter(c)) {
                char base = Character.isUpperCase(c) ? 'A' : 'a';
                c = (char) ((c - base + shift) % 26 + base);
            }
            res += c;
        }
        return res;
    }

    public String enc(String text,int shift){
        String res = "";
        for(int i = 0; i < text.length; i++){
            char c = text.charAt(i);
            if(Character.isLetter(C)){
                char base = Character.isUpperCase(c)?'A':'a';
                c = (char (c - base + shift) % 26 +base);
            }
            res+=c;
        }
        return res;
    }
}