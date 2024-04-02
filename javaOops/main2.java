// Define a simple class called Person
class Person {
    // Attributes of the Person class
    String name;
    int age;

    // Parameterized constructor
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Method to display information about the person
    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

// main2 class where the program starts execution
public class main2 {
    public static void main(String[] args) {
        // Creating an object of the Person class using the parameterized constructor
        Person person1 = new Person("Anushka", 20);

        // Displaying information about the person
        System.out.println("Person 1:");
        person1.displayInfo();
    }
}

