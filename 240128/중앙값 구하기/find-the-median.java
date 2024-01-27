import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
    int a, b, c;

    a = sc.nextInt();
    b = sc.nextInt();
    c = sc.nextInt();

    if(a > b){
        if(c > a){
            System.out.println(a);
        }
        else if(b > c){
            System.out.println(b);
        }
        else{
            System.out.println(c);
        }
    }
    else
        if(c > b){
            System.out.println(b);
        else if(a > c){
            System.out.println(a);
        }
        else
            System.out.println(c);
    }

    }
}