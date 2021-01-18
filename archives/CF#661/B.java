import java.util.*;

public class B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t) {
            int n = sc.nextInt();
            int a[] = new int[n], b[] = new int[n];

            int aMin = Integer.MAX_VALUE, bMin = Integer.MAX_VALUE;
            for(int i=0; i<n; ++i){
                a[i] = sc.nextInt();
                if(a[i]<aMin){
                    aMin = a[i];
                }
            }
            for(int i=0; i<n; ++i){
                b[i] = sc.nextInt();
                if(b[i]<bMin)
                    bMin = b[i];
            }
            
            long moves = 0;
            for(int i=0; i<n; ++i){
                int aDiff = a[i] - aMin;
                int bDiff = b[i] - bMin;

                int temp = Math.min(aDiff, bDiff);
                a[i] -= temp;
                b[i] -= temp;

                aDiff -= temp;
                bDiff -= temp;

                moves += temp + aDiff + bDiff;
            }

            System.out.println(moves);
        }
    }
}