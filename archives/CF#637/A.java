import java.util.*;

public class A{

    public static boolean check(int n, int a, int b, int c, int d){
        long ab = (long)Math.abs(a-b)*n;
        long AB = (long)(a+b)*n;

        long cd = Math.abs(c-d);
        long CD = (long)c+d;

        if((AB<cd && ab<cd) || (AB>CD && ab>CD))
            return false;

        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            int n = sc.nextInt(),
                a = sc.nextInt(),
                b = sc.nextInt(),
                c = sc.nextInt(),
                d = sc.nextInt();

            if(check(n,a,b,c,d))
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}