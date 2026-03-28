public class Square {
    int x = 5;
    Square(){
        int z = x*x;
        System.out.println(z);
    }
}
class Test{
    public static void main(String[] args) {
        Square sq = new Square();
        System.out.println(sq);
    }
}