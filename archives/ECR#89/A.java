import java.util.*;

public class A{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for(int t=0; t<T; ++t){
            int a = sc.nextInt();
            int b = sc.nextInt();           
            
            System.out.println(Math.min(a, Math.min(b, (a+b)/3)));
        }
        sc.close();
    }
}