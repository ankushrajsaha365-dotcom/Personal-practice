// // First Interface
// interface Dog{
//     void sample();
// }
// // Second Interface
// interface Cat{
//     void sample();
// }
// // Class implementing both interfaces
// class Sub implements Dog, Cat{
// // Method from Dog interface
//     public void sample(){
//         System.out.println("Wofoo");
//     }
// // Method from Cat interface
//     public void sample(){
//         System.out.println("Meow");
//     }
// // Main Method
//     public static void main(String args[]){
//         Sub obj = new Sub();
//         obj.sample();
//         obj.sample();
//     }
// }

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
class Sub implements Dog, Cat {

    // You write the method ONLY ONCE to resolve the conflict
    public void sample() {
        // You can choose to run both implementations inside here:
        Dog.super.sample(); // Calls Dog's sample()
        Cat.super.sample(); // Calls Cat's sample()
    }

    // Main Method
    public static void main(String args[]) {
        Sub obj = new Sub();
        obj.sample(); // This will trigger both prints via the overridden method
    }
}