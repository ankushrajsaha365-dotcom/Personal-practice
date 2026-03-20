import java.util.Scanner;

public class Sum {
    
    public static void main(String[] srgs){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number a:");
        int a = sc.nextInt();
        System.out.println("Enter number b:");
        int b = sc.nextInt();
        System.out.println("Enter number c:");
        int c = sc.nextInt();
        int total = a+b+c;
        System.out.println("Total is "+total);
        sc.close();
    }
}
