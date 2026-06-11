package Java.lets_java;
// Write a method sum which may perform addition of integers and addition of floating-
// point numbers. Implement the scenario with method overloading.
public class Prac7 {
    // Method to add two integers
    int sum(int a, int b) {
        return a + b;
    }

    // Overloaded method to add two floating-point numbers
    double sum(double a, double b) {
        return a + b;
    }

    public static void main(String[] args) {

        Prac7 obj = new Prac7();

        // Integer addition
        int intResult = obj.sum(10, 20);
        System.out.println("Sum of integers: " + intResult);

        // Floating-point addition
        double doubleResult = obj.sum(5.5, 4.3);
        System.out.println("Sum of floating-point numbers: " + doubleResult);
    }
}
