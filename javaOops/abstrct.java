public class abstrct {
    public static void main(String[] args) {
        dog d1=new dog();
        d1.walk();
        d1.eats();

    }
}

abstract class Animal
{
    abstract void walk();
    public void eats()
    {
      System.out.println("animal eats");
    }
    Animal()
    {
        System.out.println("animal constructor");;
    }
}
 
class dog extends Animal
{
    public void walk()
    {
        System.out.println("walks on 4 legs");
    }
    dog()
    {
        System.out.println("dog constructor");
    }
}
class penguine extends Animal
{
    public void walk()
    {
        System.out.println("walks on 2 legs");
    }
}
