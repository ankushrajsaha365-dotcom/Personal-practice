// 18. Write a program in to read n number of values in an array and display it in reverse order
// Sample Output
// Enter the Array Size = 5
// Element of a[0] = 1
// Element of a[1] = 2
// Element of a[2] = 3
// Element of a[3] = 4
// Element of a[4] = 5
// Display Reverse Order 5 4 3 2 1
import java.util.Scanner;

class ASS3_18 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // Input array size
        System.out.print("Enter the Array Size = ");
        int n = sc.nextInt();

        int a[] = new int[n];

        // Input array elements
        for (int i = 0; i < n; i++) {
            System.out.print("Element of a[" + i + "] = ");
            a[i] = sc.nextInt();
        }

        // Display array in reverse order
        System.out.print("Display Reverse Order ");

        for (int i = n - 1; i >= 0; i--) {
            System.out.print(a[i] + " ");
        }
        sc.close();
    }
} 
    

