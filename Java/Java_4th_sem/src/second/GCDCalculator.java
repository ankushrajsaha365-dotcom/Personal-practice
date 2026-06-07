package second;

public class GCDCalculator {
    // Method to calculate GCD of two numbers using the Euclidean algorithm
    public int findGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}
