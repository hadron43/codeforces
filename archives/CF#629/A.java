import java.util.Scanner;

public class A{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            int a = sc.nextInt();
            int b = sc.nextInt();
            if(a%b==0)
                System.out.println(0);
            else
                System.out.println(b-(a%b));
        }
        sc.close();
    }
}