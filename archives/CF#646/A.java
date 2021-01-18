import java.util.*;

public class A{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            int n = sc.nextInt();
            int x = sc.nextInt();
            int a[] = new int[n];
            int odds = 0, evens = 0;
            for(int i=0; i<n; ++i){
                a[i] = sc.nextInt();

                if(a[i]%2==0)
                    evens++;
                else
                    odds++;
            }

            if(odds>x)
                odds = x;

            if(odds>0 && odds%2==0)
                odds--;
            
            if(odds>0 && odds+evens>=x)
                System.out.println("Yes");
            else
                System.out.println("No");

        }
        sc.close();
    }
}