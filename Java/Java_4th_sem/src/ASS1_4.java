import java.util.Scanner;

public class ASS1_4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Input first binary number: ");
        String b1 = sc.nextLine();

        System.out.print("Input second binary number: ");
        String b2 = sc.nextLine();

        // Convert binary to decimal
        int num1 = Integer.parseInt(b1, 2);
        int num2 = Integer.parseInt(b2, 2);

        int sum = num1 + num2;

        // Convert back to binary
        String result = Integer.toBinaryString(sum);

        System.out.println("Sum of two binary numbers: " + result);

        sc.close();
    }
}