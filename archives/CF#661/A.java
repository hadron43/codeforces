import java.util.*;

public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t) {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for(int i=0; i<n; ++i) {
                arr[i] = sc.nextInt();
            }

            Arrays.sort(arr);
            int count = 0;
            for(int i=0; i<n-1; ++i) {
                if(Math.abs(arr[i+1] - arr[i])>1){
                    count ++;
                    break;
                }
            }

            if(count>0 && arr.length>1)
                System.out.println("NO");
            else
                System.out.println("YES");
        }
    }
}