import java.util.*;

public class A{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            int n = sc.nextInt(), m = sc.nextInt();
            if(n==1 || m==1 || (n==2 && m==2))
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}