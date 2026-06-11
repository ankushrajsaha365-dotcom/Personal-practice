package Java.lets_java;
    
// First Interface with a default method
interface Dog {
    default void sample() {
        System.out.println("Wofoo");
    }
}

// Second Interface with a default method
interface Cat {
    default void sample() {
        System.out.println("Meow");
    }
}

// Class implementing both interfaces
class Prac4 implements Dog, Cat {

    // You write the method ONLY ONCE to resolve the conflict
    public void sample() {
        // You can choose to run both implementations inside here:
        Dog.super.sample(); // Calls Dog's sample()
        Cat.super.sample(); // Calls Cat's sample()
    }

    // Main Method
    public static void main(String args[]) {
        Prac4 obj = new Prac4();
        obj.sample(); // This will trigger both prints via the overridden method
    }
}