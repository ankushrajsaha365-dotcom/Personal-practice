/* 27. Create a Generic class to store different 
   data types and display them. Use constructor and
   print () function for storing and display.
*/

// Generic class
class GenericClass<T> {

    T data;

    // Constructor
    GenericClass(T data) {
        this.data = data;
    }

    // Print function
    void print() {
        System.out.println("Stored Data: " + data);
    }
}

// Main class
public class ASS6_27 {
    public static void main(String[] args) {

        // Integer type
        GenericClass<Integer> obj1 = new GenericClass<>(100);

        // String type
        GenericClass<String> obj2 = new GenericClass<>("Hello Java");

        // Double type
        GenericClass<Double> obj3 = new GenericClass<>(99.99);

        // Display data
        obj1.print();
        obj2.print();
        obj3.print();
    }
}