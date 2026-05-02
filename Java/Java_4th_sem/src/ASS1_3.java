// import java.util.Scanner;

public class ASS1_3 {
    public static void main(String[] args) {
        // Scanner sc = new Scanner(System.in);

        // System.out.print("Enter the radius of the circle: ");
        // double r = sc.nextDouble();   
        double r = 7.5;
        double area = Math.PI * r * r;
        double perimeter = 2 * Math.PI * r;

        System.out.println("The radius of the circle is = "+r);
        System.out.println("Perimeter is = " + perimeter);
        System.out.println("Area is = " + area);

        // sc.close();
    }
}