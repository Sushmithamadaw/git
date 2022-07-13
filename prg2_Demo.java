class Outer {
    int x=100;

    class Inner {
    
        int y=200;

void method(){
    System.out.println(x);
    System.out.println(x+y);
}
}
void display(){
    Inner ob1=new Inner();
    System.out.println(x);
    System.out.println(ob1.y);
}
}
public class prg2_Demo {
    public static void main(String[] args) {
        Outer obname=new Outer();
        obname.display();
        Outer.Inner ob2=obname.new Inner();
        ob2.method();
    }
}
