public class interfce {
    public static void main(String[] args) {
        dog d1=new dog();
        d1.walk();
        d1.eats();
    }
}

/**
 * Innerinterfce
 */
interface Animal 
{
    int eyes=2;
   public void walk();  //without the public keyword works because by default the access modifier is 'abstract and public'  
}

 interface omnivore 
 {
    void eats();
    
}
class dog implements Animal,omnivore //multiple inheritence done only by 'interface' and not abstraction
{
    public void walk()  //public keyword is mandat. because by default the access modifier is 'default'
    {
        System.out.println("walks on 4 legs ");
    }
    public void eats()
    {
        System.out.println("eats veg & non-veg");
    }
}

