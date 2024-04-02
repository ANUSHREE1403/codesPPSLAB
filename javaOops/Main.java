
    // Define a simple class called Person
class Person {
    // Attributes of the Person class
    String name;
    int age;

    // Non-parameterized constructor
    public Person() {
        // No need to initialize attributes here
    }

    // Method to set name
    public void setName(String name) {
        this.name = name;
    }

    // Method to set age
    public void setAge(int age) {
        this.age = age;
    }

    // Method to display information about the person
    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

// Main class where the program starts execution
public class Main {
    public static void main(String[] args) {
        // Creating an object of the Person class
        Person person1 = new Person();

        // Setting attributes using setter methods
        person1.setName("Anushree");
        person1.setAge(20);

        // Displaying information about the person
        System.out.println("Person 1 ->");
        person1.displayInfo();
    }
}
