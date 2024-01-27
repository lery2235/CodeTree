import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        if(a >= b){
            if(a >= c){
                System.out.printf("%d%n", a);
            }
            else if(b >= c){
                System.out.printf("%d%n", b);
            }
            else
                System.out.printf("%d%n", c);
        }
        else if(b >= c){
            System.out.printf("%d%n", b);
        }
        else 
            System.out.printf("%d%n", c);
    
        sc.close();
    }
}