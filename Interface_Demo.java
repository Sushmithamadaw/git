import java.util.Scanner;

import javax.sound.sampled.BooleanControl;
import javax.xml.crypto.Data;

public interface SimpleStack{
    void push(char ch);
     char pop();
     boolean isEmpty();
     boolean isfull();
}
class fixedLengthStack implements SimpleStack{
    private char[] data;
    private int tos;
    fixedLengthStack(int size){
        data = new char[size];
        tos=0;
    }
    public void push(char ch){
        if(isfull()){
            System.out.println("------------Stack is  full---------------");
            return;
        }
        data[tos]=ch;
    tos++;
    }
    
    public char pop(){
        if(isEmpty()){
            System.out.println("------------Stack is  Empty---------------");
            return(char)0;
        }
    tos--;
     return data[tos];
    }
    public boolean isEmpty(){
        return tos==0;
    }
    public boolean isfull(){
        return tos==data.length;
    }

}
class DynamicStack implements SimpleStack{
    private char[] data;
    int tos;
    DynamicStack(int size){
        data=new char[size];
        tos=0;
    }
    public void push(char ch){
    if(tos==data.length){
        char[] t=new char[data.length*2];
        for(int i=0;i<tos;i++)
        t[i]=data[i];
        data=t;
    }
        data[tos]=ch;
        tos++;
}
        public char pop() {
            if(isEmpty()){
                System.out.println("Stack is empty");
                return(char)0;

            }
            tos--;
            return data[tos];

        }
public boolean isEmpty() {
    return tos==0;
}
public boolean isfull() {
    return true;
}
    }
public class Interface_Demo {
    public static void main(String[] args) {
        fixedLengthStack fx=new fixedLengthStack(10);
        DynamicStack dy=new DynamicStack(10);
    
        SimpleStack istack;
        istack=fx;
        System.out.println("\nFixed length contents are");
        for(int i=0;i<10;i++){
        istack.push((char)('A'+i));
        }
        for(int i=0;i<10;i++){
            System.out.print(istack.pop()+"\t"); 
        }
        System.out.println("\nContents of Dynamic Stack");
        for(int i=0;i<10;i++){
            istack.push((char)('A'+i));
            
        }
        for(int i=0;i<10;i++){
            System.out.print(istack.pop()+"\t");
        }
    }
}

