package Java.lets_java;

public class Prac3 {
    public static void main(String[] args) {
        
        int arr1[]={1,2,3,4,5};
        int arr2[] = new int[arr1.length];

        for(int i=0;i<arr1.length;i++){
            arr2[i]=arr1[i];
        }
        System.out.print("Original array: {");
        for(int i=0;i<arr1.length;i++){
            System.out.print(arr1[i]);
            if(i<arr1.length -1){
                System.out.print(", ");
            }
        }
        System.out.print("}\n");


        System.out.print("Copy array = {");

        for (int i = 0; i < arr2.length; i++) {
            System.out.print(arr2[i]);

            if (i < arr2.length - 1) {
                System.out.print(", ");
            }
        }
        System.out.println("}");
    }

}
