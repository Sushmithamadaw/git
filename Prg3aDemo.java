import java.util.Scanner;

public class Prg3aDemo {
    public static void main(String[] args) {
        String s;
        String a="College";
        StringBuffer sb=new StringBuffer("Vivekananda ");
        StringBuffer sb1=new StringBuffer("");
System.out.println("buffer:"+sb);
System.out.println("Capacity of the String:"+sb.capacity());
System.out.println("Reverse String:"+sb.reverse());
String upper =sb.toString().toUpperCase();
Scanner sc=new Scanner(System.in);
System.out.println("Enter a string");
s=sb1.append(sc.nextLine()).toString();
sb1=new StringBuffer(upper);
System.out.println("After Append:"+sb1+" "+s);
    }
    
}
