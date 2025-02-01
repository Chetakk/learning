import java.util.*;

public class punit{
    static class Node{
        int data;
        Node next;
        Node(int d){
            data = d;
            next = null;
        }
    }

    Node head;

    void push(int newData){
        Node newNode = new Node(newData);
        newNode.next = head;
        head = newNode;
    }

    boolean detectLoop(Node h) {
    HashSet < Node > s = new HashSet < Node > ();
    while (h != null) {
        if (s.contains(h))
            return true;
        s.add(h);
        h = h.next;
        }
        return false;
    }

    public static void main(String[] args){
        LinkedList llist = new LinkedList();

    llist.push(1);
    // llist.push(2);
    // llist.push(3);
    // llist.push(10);

    llist.head.next = llist.head;

    if (llist.detectLoop(llist.head))
      System.out.println("Loop Exists");
    else
      System.out.println("Loop doesn't exists");
    }
}