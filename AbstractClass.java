abstract class one{
    abstract void show();
}
class two extends one{
    void show(){
        System.out.print("Abstract Class");
    }
}
class a{
    public static void main(String[] args)
    {
        two t = new two();
        t.show();
    }
}