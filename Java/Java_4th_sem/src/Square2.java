public class Square2 {;
    Square2(int x){
        int z = x*x;
        System.out.println(z);
    }
}
class Test{
    public static void main(String[] args) {
        Square2 sq = new Square2(5);
        System.out.println(sq);
    }
}