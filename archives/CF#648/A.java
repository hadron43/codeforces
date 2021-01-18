import java.util.*;

public class A{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for(int t=0; t<T; ++t){
            int n = sc.nextInt();
            int m = sc.nextInt();
            int M[][] = new int[n][m];
            
            boolean blRows[] = new boolean[n];
            boolean blCols[] = new boolean[m];
            
            for(int i=0; i<n; ++i){
                for(int j=0; j<m; ++j){
                    M[i][j] = sc.nextInt();

                    if(M[i][j]==1){
                        blRows[i] = true;
                        blCols[j] = true;
                    }
                }
            }

            int countRows = 0, countCols = 0;

            for(int i=0; i<n; ++i)
                if(!blRows[i])
                    countRows++;

            for(int i=0; i<m; ++i)
                if(!blCols[i])
                    countCols++;

            int no = countCols;
            if(countRows<no)
                no = countRows;

            // System.out.print(countCols);
            if(no%2==0)
                System.out.println("Vivek");
            else
                System.out.println("Ashish");

        }

        sc.close();
    }
}