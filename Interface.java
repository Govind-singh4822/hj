interface sample{
    void print();
}
class demo implements sample{
   public void print(){
        System.out.print("Hellow");
    }
}
class a{
    public static void main(String[] args)
    {
        demo d = new demo();
        d.print();
    }
}