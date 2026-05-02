public class ASS1_8 {
    public static void main(String[] args) {

        String str1 = "Python";
        String str2 = "";   // given test case

        char first;
        char last;

        // first character from str1
        if (str1.length() == 0) {
            first = '#';
        } else {
            first = str1.charAt(0);
        }

        // last character from str2
        if (str2.trim().length() == 0) {  // handles " " as empty
            last = '#';
        } else {
            last = str2.charAt(str2.length() - 1);
        }

        System.out.println("" + first + last);
    }
}