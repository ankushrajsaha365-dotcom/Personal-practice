import java.util.Scanner;

public class Length {
    
    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the distance in km:"); 
        double km = sc.nextFloat();
        double mile = 0.621371*km;
        System.out.println("The distance in miles is "+mile);
        sc.close();
    }
}
