import java.util.*;

public class A{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        long two[] = new long[31];
        two[0] = 1;
        for(int i=1; i<31; ++i)
            two[i] = two[i-1] * 2;

        for(int t=0; t<T; ++t){
            int n = sc.nextInt();
            long s1 = 0, s2 = 0;
            for(int i=1; i<(n/2); ++i)
                s1 += two[i];
            s1 += two[n];

            for(int i=n/2; i<n; ++i)
                s2 += two[i];

            System.out.println(s1-s2);
        }
    }
}