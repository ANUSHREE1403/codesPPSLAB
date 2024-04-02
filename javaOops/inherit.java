public class inherit {
    public static void main(String[] args) {
     Triangle s1=new Triangle();
     s1.area(30,4);   
    }
}
class Shape
{
    public void area(){
        System.out.println("area");
    }
}

class Triangle extends Shape
{
    public void area(int l,int h)
    {
        System.out.println(0.5*l*h);
    }
}
class EquilateralTriangle extends Triangle
{
    public void area(int l,int h)
    {
        System.out.println(0.5*l*h);
    }
}