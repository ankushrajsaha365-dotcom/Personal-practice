public class ASS1_4x {
    public static void main(String[] args) {


        String b1 = "10";
        String b2 = "11";

        int num1 = Integer.parseInt(b1, 2);
        int num2 = Integer.parseInt(b2, 2);

        int sum = num1 + num2;

        String result = Integer.toBinaryString(sum);

        System.out.println("Sum of two binary numbers: " + result);
    }
}

