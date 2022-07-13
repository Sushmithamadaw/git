import java.util.Scanner;

class Const_over{
   double l;
     double b;
      double h;
    Const_over(double l){
        this.l=this.b=this.h=l;
    }
    Const_over(double l,double b,double h){
        this.l=l;
        this.b=b;
        this.h=h;
    }
    double volume(){
    return l*b*h;
    }
    void print(){
        System.out.println("Demonstrating constructor overloading and method overloading");
    }
    void print(double v){
        System.out.println("volume:"+v);

 }
}
 public class prg1_demo {
    public static void main(String[] args) {  
     Const_over ob=new Const_over(10);
    double v1=ob.volume();
     ob.print();
     ob.print(v1);
     Const_over ob1=new Const_over(10,20,10);
double v2=ob1.volume();
ob1.print();
ob1.print(v2);
    }
}
