import java.util.*;

public class B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for(int t=0; t<T; ++t){
            int n = sc.nextInt();
            int k = sc.nextInt();

            int[] a = new int[n];
            for(int i=0; i<n; ++i)
                a[i] = sc.nextInt();

            ArrayList<Integer> pre = new ArrayList<Integer>();
            for(int i=0; i<n; ++i){
                if(!pre.contains(a[i]))
                    pre.add(a[i]);
            }

            
            if(pre.size()<=k){
                
                StringBuilder ans = new StringBuilder();
               
                int x=0;
                while(pre.size()!=k)
                    pre.add(pre.get(x++));

                for(int i=0; i<pre.size(); ++i)
                    ans.append(pre.get(i)+" ");

                int repeat = n;
                System.out.println(repeat*pre.size());

                for(int i=0; i<repeat; ++i){
                    System.out.print(ans.toString());
                }
                System.out.println();
            }
            else{
                System.out.println(-1);
            }
        }
    }
}