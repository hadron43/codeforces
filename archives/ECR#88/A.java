import java.util.Scanner;

public class A{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for(int t=0; t<T; ++t){
            int n = sc.nextInt();
            int m = sc.nextInt();
            int k = sc.nextInt();

            int maxJokers = m;
            if(m>n/k)
                maxJokers = n/k;

            m -= maxJokers;
            int secondMax = m/(k-1);
            if(m%(k-1) != 0)
                secondMax += 1;
            
            System.out.println(maxJokers - secondMax);
        }
        sc.close();
    }
}