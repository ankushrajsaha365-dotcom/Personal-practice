package Java.lets_java;
/*
WAP to show that Wrapper class allows 
primitive data types to be accessed as object and
object as a primitive data type.
*/
public class Prac6 {
    public static void main(String[] args) {
        // 1. Primitive to Object (Autoboxing)
        int primitiveInt = 50;
        Integer objectInteger = primitiveInt; // Compiler treats this as Integer.valueOf(primitiveInt)
        
        System.out.println("Primitive int: " + primitiveInt);
        System.out.println("Wrapper Integer object: " + objectInteger);

        // 2. Object to Primitive (Unboxing)
        Integer myWrapper = new Integer(100);
        int myPrimitive = myWrapper; // Compiler treats this as myWrapper.intValue()
        
        System.out.println("\nWrapper Integer object: " + myWrapper);
        System.out.println("Primitive int: " + myPrimitive);
        
        // Demonstrating that object can now access object methods
        System.out.println("\nUsing object method on wrapper: " + objectInteger.compareTo(25));
    }
}