// 19. Write a program in to copy the elements of one array into another array
// Sample Output

// Array = {1, 2, 3, 4, 5}
// Copy Array Elements one to Another Array = {1, 2, 3, 4, 5}

public class ASS3_19 {

    public static void main(String[] args) {

        // Original array
        int arr1[] = {1, 2, 3, 4, 5};

        // New array with same size
        int arr2[] = new int[arr1.length];

        // Copy elements from arr1 to arr2
        for (int i = 0; i < arr1.length; i++) {
            arr2[i] = arr1[i];
        }

        // Display original array
        System.out.print("Array = {");
        for (int i = 0; i < arr1.length; i++) {
            System.out.print(arr1[i]);

            if (i < arr1.length - 1) {
                System.out.print(", ");
            }
        }
        System.out.println("}");

        // Display copied array
        System.out.print("Copy Array Elements one to Another Array = {");

        for (int i = 0; i < arr2.length; i++) {
            System.out.print(arr2[i]);

            if (i < arr2.length - 1) {
                System.out.print(", ");
            }
        }
        System.out.println("}");
    }
    
}
