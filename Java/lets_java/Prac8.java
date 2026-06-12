package Java.lets_java;

public class Prac8 {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;

        System.out.println("Before swap: a = " + a + ", b = " + b);

        // Method 1: Using Arithmetic Operators
        a = a + b; // a becomes 30
        b = a - b; // b becomes 10
        a = a - b; // a becomes 20

        System.out.println("After swap (Arithmetic): a = " + a + ", b = " + b);

        // Resetting values for demonstration
        a = 10;
        b = 20;

        // Method 2: Using Bitwise XOR Operator
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;

        System.out.println("After swap (Bitwise): a = " + a + ", b = " + b);
    }
}