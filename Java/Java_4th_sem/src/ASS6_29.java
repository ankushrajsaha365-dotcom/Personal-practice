/*
29. With a Java Array List create a student record 
with Roll No., Name, Age and display the
students record. Use user defined class objects in Java Array List.
*/


import java.util.ArrayList;

class Student {
    int rollno;
    String name;
    int age;

    // Constructor
    Student(int rollno, String name, int age) {
        this.rollno = rollno;
        this.name = name;
        this.age = age;
    }

    // Method to display student data
    void display() {
        System.out.println("Roll no.: " + rollno);
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println(". . . . . . . . . . . . . . .");
    }
}
public class ASS6_29 {
    public static void main(String[] args) {
        // Creating an ArrayList of Student objects
        ArrayList<Student> students = new ArrayList<>();

        // Adding student objects to the list
        students.add(new Student(101, "Ram", 20));
        students.add(new Student(102, "Raju", 21)); // Changed roll numbers to be unique
        students.add(new Student(103, "Shyam", 22));
        students.add(new Student(104, "Raj", 19));
        students.add(new Student(105, "Tilak", 20));

        System.out.println("Students Records:\n");

        // Corrected for-each loop syntax
        for (Student s : students) {
            s.display();
        }
    }
}