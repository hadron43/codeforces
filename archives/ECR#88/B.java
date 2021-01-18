import java.io.*;
import java.util.*;

public class B{
    public static void main(String[] args) throws IOException {
        Reader.init(System.in);
        int T = Reader.nextInt();

        for(int t=0; t<T; ++t){
            int n = Reader.nextInt();
            int m = Reader.nextInt();
            int x = Reader.nextInt();
            int y = Reader.nextInt();

            int black[][] = new int[n][m];
            int oneCount = 0, twoCount = 0;
            for(int i=0; i<n; ++i){
                String s = Reader.next();
                for(int j=0; j<m; ++j)
                    if(s.charAt(j)=='.'){
                        black[i][j] = 0;
                        oneCount++;
                    }
                    else
                        black[i][j] = 1;
            }

            if(x>(float)y/2){    
                for(int i=0; i<n; ++i){
                    for(int j=0; j<m; ++j){
                        if(black[i][j]==0){
                            // if(i<n-1 && black[i+1][j]==0){
                            //     black[i][j] = black[i+1][j] = 1;
                            //     oneCount-=2;
                            //     twoCount++;
                            // }

                            if(j<m-1 && black[i][j+1]==0){
                                black[i][j] = black[i][j+1] = 1;
                                oneCount-=2;
                                twoCount++;
                            }
                        }
                    }
                }
            }
            
            System.out.println(oneCount*x + twoCount*y);
        }
    }

    static class Reader {
        static BufferedReader reader;
        static StringTokenizer tokenizer;
        static void init(InputStream input) {
            reader = new BufferedReader(
                         new InputStreamReader(input) );
            tokenizer = new StringTokenizer("");
        }
        static String next() throws IOException {
            while ( ! tokenizer.hasMoreTokens() ) {
                tokenizer = new StringTokenizer(
                       reader.readLine() );
            }
            return tokenizer.nextToken();
        }
        static int nextInt() throws IOException {
            return Integer.parseInt( next() );
        }
        static long nextLong() throws IOException{
            return Long.parseLong(next());
        }
        static double nextDouble() throws IOException {
            return Double.parseDouble( next() );
        }
    }
}