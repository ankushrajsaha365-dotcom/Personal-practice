public class Example07 {
    public static void main(String[] args){
    //Type conversion
    byte b;
    int i = 257;
    double d = 323.142;
    System.out.println("Coversion of int to byte");
    b = (byte) i;
    System.out.println("i and b " + i + " " + b);
    System.out.println("Conversion of double to int");
    i = (int) d;
    System.out.println("d and i " + d + " " + i);
    
    }    
}
