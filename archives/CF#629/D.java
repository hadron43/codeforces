import java.util.*;

public class D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            int n = sc.nextInt();
            int A[] = new int[n];
            for(int i=0; i<n; ++i)
                A[i] = sc.nextInt();

            int list[] = new int[n];
            list[0] = 1;

            int res = 1;
            for(int i=1; i<n; ++i){
                if(A[i]==A[i-1])
                    list[i] = list[i-1];
                else{
                    if(list[i-1]==1){
                        list[i] = 2;
                        res = 2;
                    }
                    else
                        list[i] = 1;
                }
            }
            if(n>2 && list[0]==list[n-1] && A[0]!=A[n-1]){
                if(list[n-2]!=list[n-1]){
                    list[n-1] = 3;
                    res = 3;
                }
                else{
                    if(list[n-1]==1){
                        list[n-1] = 2;
                        res = 2;
                    }
                    else
                        list[n-1] = 1;
                }
            }

            System.out.println(res);

            for(int i:list)
                System.out.print(i+" ");
            System.out.println();
        }
    }
}