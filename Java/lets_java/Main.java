
// 1. Create the base class Animal
class Animal {
    // Variable to store the name
    String name;

    // Method for the animal's sound
    public void sound() {
        System.out.println("This animal makes a sound.");
    }
}

// 2. Create the Dog class that inherits from Animal using the "extends" keyword
class Dog extends Animal {
    
    // Method to display details
    public void display() {
        // Prints the dog's name (inherited from Animal)
        System.out.println("The dog's name is: " + name);
        
        // Calls the inherited sound() method
        sound();
    }
}

// 3. Main class to test the implementation
public class Main {
    public static void main(String[] args) {
        // Create an object of the Dog class
        Dog myDog = new Dog();
        
        // Assign a value to the inherited 'name' variable
        myDog.name = "Max";
        
        // Call the display method which will print the name and call sound()
        myDog.display();
    }
}