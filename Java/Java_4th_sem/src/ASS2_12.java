//Write a Java program to create an enum called "Weekend" with constants representing the
//days of the weekend.
enum Weekend {
    SATURDAY,
    SUNDAY
}
public class ASS2_12 {
    public static void main(String[] args) {
        // Access and print enum values
        for (Weekend day : Weekend.values()) {
            System.out.println("- "+day);
        }

        // Example usage
        Weekend today = Weekend.SATURDAY;
        System.out.println("Today is: " + today);
    }
}