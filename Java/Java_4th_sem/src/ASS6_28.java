
//28. Use Array List to store 10 numbers randomly and then sort it.

import java.util.ArrayList;
import java.util.Collections;
import java.util.Random;

public class ASS6_28{
    public static void main(String[] args) {
        // 1. Create an ArrayList to store the numbers
        ArrayList<Integer> numbers = new ArrayList<>();
        
        // 2. Use Random class to generate numbers
        Random random = new Random();
        
        // Populate the ArrayList with 10 random numbers between 1 and 100
        for (int i = 0; i < 10; i++) {
            // random.nextInt(100) generates a number from 0 to 99, adding 1 makes it 1 to 100
            int randomNumber = random.nextInt(100) + 1;
            numbers.add(randomNumber);
        }
        
        // 3. Display the unsorted list
        System.out.println("Original unsorted list: " + numbers);
        
        // 4. Sort the ArrayList
        Collections.sort(numbers);
        
        // 5. Display the sorted list
        System.out.println("Sorted list (Ascending): " + numbers);
    }
}