// 14. Design a class named Circle. Construct three circle objects with radius 2.0, 12, and 24
// and displays the radius and area of each. A no-arg constructor set the default value of radius
// to 1. A getArea() function is used to return the area of circle. Now implement the class.

class Circle {
    double radius;

    // No-argument constructor
    Circle() {
        radius = 1.0;
    }

    // Parameterized constructor
    Circle(double r) {
        radius = r;
    }

    // Method to calculate area
    double getArea() {
        return Math.PI * radius * radius;
    }
}

public class ASS2_14 {
    public static void main(String[] args) {
        
        // Creating Circle objects
        Circle c1 = new Circle(2.0);
        Circle c2 = new Circle(12);
        Circle c3 = new Circle(24);

        // Display results
        System.out.println("Circle 1 -> Radius: " + c1.radius + ", Area: " + c1.getArea());
        System.out.println("Circle 2 -> Radius: " + c2.radius + ", Area: " + c2.getArea());
        System.out.println("Circle 3 -> Radius: " + c3.radius + ", Area: " + c3.getArea());
    }
}