// Interface declaration
interface Polygon
{
// Abstract method
    int getArea(int length, int breadth);
}

// Rectangle class implementing the interface
class Rectangle implements Polygon
{
// Method implementation
    public int getArea(int length, int breadth)
    {
        return length * breadth;
    }
}

// Main class
public class InterfaceDemo
{
    public static void main(String args[])
    {
        Rectangle r = new Rectangle();
        int area = r.getArea(5, 6);
        System.out.println("Area of Rectangle = " + area);
    }
}