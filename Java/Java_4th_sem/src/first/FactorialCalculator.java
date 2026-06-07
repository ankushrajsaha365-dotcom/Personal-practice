package first;

public class FactorialCalculator {
    // Method to calculate factorial of a number
    public long findFactorial(int n) {
        long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
}