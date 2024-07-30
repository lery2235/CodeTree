import java

public class Main {
    public static void main(String[] args) {
        int arr[100];
        int k;

        for(int i = 0; i < 100; i++){
            arr[i] = sc.nextInt();
            if(arr[i] == 0){
                k = i;
                break;
            }
        }


        System.out.print(arr[k-3] + arr[k-2] + arr[k-1]);
    }
}