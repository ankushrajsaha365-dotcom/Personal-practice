// 20. Write a program to merge two arrays’ elements to store third array
// Sample Output
// First Array = {1, 2, 3, 4, 5}
// Second Array = {6, 7, 8, 9, 10}
// Merge two Array Elements = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

class ASS3_20 {
    public static void main(String[] args) {

        // First array
        int arr1[] = {1, 2, 3, 4, 5};

        // Second array
        int arr2[] = {6, 7, 8, 9, 10};

        // Third array to store merged elements
        int arr3[] = new int[arr1.length + arr2.length];

        // Copy first array elements into third array
        for (int i = 0; i < arr1.length; i++) {
            arr3[i] = arr1[i];
        }

        // Copy second array elements into third array
        for (int i = 0; i < arr2.length; i++) {
            arr3[arr1.length + i] = arr2[i];
        }

        // Display first array
        System.out.print("First Array = {");
        for (int i = 0; i < arr1.length; i++) {
            System.out.print(arr1[i]);

            if (i < arr1.length - 1) {
                System.out.print(", ");
            }
        }
        System.out.println("}");

        // Display second array
        System.out.print("Second Array = {");
        for (int i = 0; i < arr2.length; i++) {
            System.out.print(arr2[i]);

            if (i < arr2.length - 1) {
                System.out.print(", ");
            }
        }
        System.out.println("}");

        // Display merged array
        System.out.print("Merge two Array Elements = {");

        for (int i = 0; i < arr3.length; i++) {
            System.out.print(arr3[i]);

            if (i < arr3.length - 1) {
                System.out.print(", ");
            }
        }
        System.out.println("}");
    }
}