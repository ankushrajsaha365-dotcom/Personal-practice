//13. Write a Java recursive method to find the sum of the digits of a given integer.
public class ASS2_13 {
    // Recursive method to find sum of digits
    public static int sumOfDigits(int n) {
        if (n == 0) {
            return 0; // base case
        }
        return (n % 10) + sumOfDigits(n / 10);
    }

    public static void main(String[] args) {
        int number = 1234;
        int result = sumOfDigits(number);
        System.out.println("Sum of digits: " + result);
    }
}