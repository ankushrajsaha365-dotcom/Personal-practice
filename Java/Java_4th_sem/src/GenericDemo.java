// Generic class
class Box<T> {
    T data;

// Method to set value
    void setData(T data) {
    this.data = data;
    }

// Method to display value
    void display() {
        System.out.println("Data: " + data);
    }
}
// Main class
public class GenericDemo {

    public static void main(String[] args) {

// Integer type object
        Box<Integer> intBox = new Box<Integer>();
        intBox.setData(100);
        intBox.display();

// String type object
        Box<String> strBox = new Box<String>();
        strBox.setData("Hello Java");
        strBox.display();

// Double type object
        Box<Double> doubleBox = new Box<Double>();
        doubleBox.setData(45.67);
        doubleBox.display();
    }
}