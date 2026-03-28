public class JAVA_06_Operators {
    public static void main(String[] args){
        int a = 34;                        //Arithmetic operator
        int a2 = a*3;
        int a3 = a%3;
        // modulo operator on float or double will return decimal remainder
        System.out.println(a2);
        System.out.println(a3);
        
        
        int b = 56;                        //Assignment operator
        b *= 3 ;                        
        System.out.println(b);

        System.out.println(6>8);           //Comparison operator

        System.out.println(12>3 || 4>6);   //Logical operator
        System.out.println(12>3 && 4>6);

        System.out.println(2&3);           //Bitwise operator
    }
}
    
