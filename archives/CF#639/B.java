import java.util.*;

public class B{

    static int binarySearch(int arr[], int x, int l, int u){
        while(l<=u){
            int mid = (l+u)/2;
            if(arr[mid]<=x && arr[mid+1]>x)
                return mid;
            if(arr[mid]<x)
                l = mid+1;
            else
                u = mid-1;
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        int max = 30000;
        int tri[] = new int[max];
        tri[0] = 0;
        for(int i=1; i<max; ++i)
            tri[i] = tri[i-1] + i;
        
        int sticks[] = new int[max];
        for(int i=1; i<max; ++i)
            sticks[i] = tri[i]*3 - i;

        // for(int i=0; i<max; ++i)
        //     System.out.println(sticks[i]);
            
        for(int t=0; t<T; ++t){
            int n = sc.nextInt();

            int ans = 0;

            while(n>=2){
                ans+=1;
                n -= sticks[binarySearch(sticks, n, 0, max)];
            }

            System.out.println(ans);
        }
    }
}