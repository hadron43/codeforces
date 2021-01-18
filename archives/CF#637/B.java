import java.util.*;

public class B{

    static void solve(int n, int k, int A[]){
        int l = 0, maxPeaks = 0;

        int peaks = 0;
        for(int i=1; i<k-1; ++i){
            if(A[i]>A[i-1] && A[i]>A[i+1])
                peaks+=1;
        }

        maxPeaks = peaks;

        for(int i=0, j=k-1; j<n-1; ++j, ++i){
            if(A[i+1]>A[i+2] && A[i+1]>A[i])
                peaks--;
            if(A[j]>A[j-1] && A[j]>A[j+1])
                peaks++;

            if(peaks>maxPeaks){
                maxPeaks = peaks;
                l = i+1;
            }
        }

        System.out.println(maxPeaks+1 + " " + (l+1));

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            int n = sc.nextInt(),
                k = sc.nextInt();

            int A[] = new int[n];
            for(int i=0; i<n; ++i)
                A[i] = sc.nextInt();

            solve(n, k, A);
        }
    }
}