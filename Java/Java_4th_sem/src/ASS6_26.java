//26. Create an array list of fruits and display all the fruits that has been inserted into the list.
import java.util.ArrayList;

public class ASS6_26 {
    public static void main(String[] args) {
        ArrayList<String>fruits = new ArrayList<>();

        fruits.add("Apple");
        fruits.add("Banana");
        fruits.add("Mango");
        fruits.add("Strawberry");
        System.out.println("Fruits in the Arraylist are:");
        for(String fruit : fruits){
            System.out.println(fruit);
        }
    }    
}
