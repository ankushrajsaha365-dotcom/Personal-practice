package Java.lets_java;
/*
2. Write a Java program to create and display a unique four-digit number using 1, 2, 3, 4.
Also count how many three-digit numbers are there.
Expected Output
1234
1243
...

4312
4321
*/
public class Prac2 {
    public static void main(String[] args) {
        int count = 0;
        for(int i=1;i<=4;i++){
            for(int j=1;j<=4;j++){
                for(int k=1;k<=4;k++){
                    for(int m=1;m<=4;m++){
                        if(i!=j && j!=k && k!=m && m!=i && j!=m && k!=i){
                            System.out.println(i +""+j+""+k+""+m);
                            count++;
                        }
                    }
                }
            }
        }
        System.out.println("Total numbers:"+count);
    }
}
