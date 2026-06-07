//30. Create a Generic Method to set a string and integer and display them.

class Demo {

    // Generic Method
    public <T> void display(T data) {
        System.out.println("Value: " + data);
    }
}

public class ASS6_30 {
    public static void main(String[] args) {

        Demo obj = new Demo();

        // Passing Integer
        obj.display(101);

        // Passing String
        obj.display("Hello Java");
    }
}