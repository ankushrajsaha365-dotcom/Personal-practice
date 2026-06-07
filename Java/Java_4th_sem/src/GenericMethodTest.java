class Demo {

    // Generic Method
    <T> void display(T data) {
        System.out.println("Value: " + data);
    }
}

public class GenericMethodTest {

    public static void main(String[] args) {

        Demo d = new Demo();

        // Passing Integer
        d.display(101);

        // Passing String
        d.display("Java Programming");
    }
}