public class ASS1_7 {
    public static void main(String[] args) {

        String str1 = "TV";

        while (str1.length() < 3) {
            str1 += "#";
        }

        System.out.println(str1.substring(0, 3));
    }
}