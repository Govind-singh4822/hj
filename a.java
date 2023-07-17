import java.util.Scanner;

class animal{
    void eat()
    {
        System.out.println("hellow");
    }
}

class dog extends animal{
    void bark()
    {
        System.out.println("asd");
    }
}
class a{
    public static void main(String[] args)
    {
        dog d = new dog();
        d.bark();
        d.eat();
    }
}


