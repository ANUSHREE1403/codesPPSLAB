class Student{
    String name;
    int age;
    public void info(String name){
      System.out.println(name);
    }
    public void info(int age){
        System.out.println(age);
      }
      public void info(String name,int age){
        System.out.println(name+" and "+age);
      }
      Student(){
       System.out.println("constructor called");
      }
}
public class polymor {
    public static void main(String[] args) {
        Student s1=new Student();
        s1.age=20;
        s1.name="uniyal";
        s1.info(s1.name,s1.age);
        s1.info(s1.name);
        s1.info(s1.age);
    }
}
