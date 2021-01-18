import java.util.*;

public class C{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            int n = sc.nextInt();
            int a[] = new int[n];
            for(int i=0; i<n; ++i)
                a[i] = sc.nextInt();

            HashSet<Integer> hash = new HashSet<>();
            boolean ans = true;
            for(int i=0; i<n; ++i){
                int temp = ((i+a[i])%n+n)%n;
                if(hash.contains(temp)){
                    ans = false;
                    break;
                }
                hash.add(temp);
            }
            if(ans)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}