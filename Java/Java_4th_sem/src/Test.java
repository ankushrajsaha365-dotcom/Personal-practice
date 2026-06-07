// Importing the classes from custom packages
import first.FactorialCalculator;
import second.GCDCalculator;

public class Test {
    public static void main(String[] args) {
        // Test Factorial
        FactorialCalculator factObj = new FactorialCalculator();
        int numForFact = 5;
        long factorialResult = factObj.findFactorial(numForFact);
        System.out.println("Factorial of " + numForFact + " is: " + factorialResult);

        // Test GCD
        GCDCalculator gcdObj = new GCDCalculator();
        int num1 = 24, num2 = 60;
        int gcdResult = gcdObj.findGCD(num1, num2);
        System.out.println("GCD of " + num1 + " and " + num2 + " is: " + gcdResult);
    }
}