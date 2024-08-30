import java.util.Scanner;

class Sortlist{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = 10;
        String names[] = new String[num];
        String sname;
        System.out.println("Enter 10 names: ");
        for(int i=0; i<num; i++){
            names[i] = input.nextLine();
        }

        System.out.println("Enter the name to search: ");
        sname = input.nextLine();

        for(int i=0; i<num; i++){
            if(names[i].contains(sname)){
                System.out.println("Name found at position: "+(i+1));
                break;
            }
            else{
                System.out.println("Name not found");
                break;
            }
        }

    }
}