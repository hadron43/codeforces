import java.util.*;

public class C{

    static boolean solve(int A[], int hash[], int n){
        
        return res;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            int n = sc.nextInt();
            int A[] = new int[n];
            int hash[] = new int[n+1];

            for(int i=0; i<n; ++i){
                A[i] = sc.nextInt();
                hash[A[i]] = i;
            }

            boolean res = solve(A, hash, n);
            if(res==true)
                System.out.println("Yes");
            else
                System.out.println("No");
        }
    }
}