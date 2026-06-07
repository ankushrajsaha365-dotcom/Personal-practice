// Define the Polygon interface
interface Polygon {
    // Abstract method to calculate area
    void getArea(int length, int breadth);
}

// Rectangle class implements the Polygon interface
class Rectangle implements Polygon {
    
    // Implement the getArea method from the interface
    @Override
    public void getArea(int length, int breadth) {
        int area = length * breadth;
        System.out.println("The area of the rectangle is: " + area);
    }
}

// Main class to run the program
public class ASS4_21 {
    public static void main(String[] args) {
        // Create an instance of the Rectangle class
        Rectangle rect = new Rectangle();
        
        // Call getArea with length = 5 and breadth = 6
        rect.getArea(5, 6);
    }
}