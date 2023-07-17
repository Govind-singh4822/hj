class animal{
    void eat(){
        System.out.println("Barking");
    }
}

class dog extends animal{
    void bark(){
        System.out.print("Eating..");
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