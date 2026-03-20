import java.util.Scanner;

public class JAVA_05_Exercise {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter marks of the subjects:");
        float full_marks = 500f;
        System.out.println("Marks in Mathematics:");
        int a = sc.nextInt();
        System.out.println("Marks in Physics:");
        int b = sc.nextInt();
        System.out.println("Marks in Chemistry:");
        int c = sc.nextInt();

        System.out.println("Marks in Biology:");
        int d = sc.nextInt();

        System.out.println("Marks in CS:");
        int e = sc.nextInt();

        int total = a+b+c+d+e;
        System.out.println("Total marks:"+total);
        float percentage = (total/full_marks)*100;
        System.out.println("Percentage obtained:"+percentage);
        
        sc.close();
    }
    
}
