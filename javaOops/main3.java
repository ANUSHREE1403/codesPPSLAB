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

    // Copy constructor
    public Person(Person p2) {
        this.name = p2.name;
        this.age = p2.age;
    }

    // Method to display information about the person
    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

// Main class where the program starts execution
public class main3 {
    public static void main(String[] args) {
        // Creating an object of the Person class using the parameterized constructor
        Person p1 = new Person("pranay", 19);

        // Creating another object using the copy constructor
        Person p2 = new Person(p1);

        // Displaying information about the persons
        System.out.println("Person 1:");
        p1.displayInfo();
        System.out.println();

        System.out.println("Person 2 (Copy of p1 ):");
        p2.displayInfo();
    }
}

