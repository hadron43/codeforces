import java.util.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class D{
    public static void main(String[] args) throws IOException{
        sc.init(System.in);
        
        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            String A[] = new String[9];

            for(int i=0; i<9; ++i){
                String s = sc.next();
                StringBuilder b = new StringBuilder();
                for(int j=0; j<9; ++j){
                    char inp = s.charAt(j);
                    if(inp=='1')
                        b.append("2");
                    else
                        b.append(inp);
                }
                // b.append(s);
                A[i] = b.toString();
            }
                

            for(int i=0; i<9; ++i){
                System.out.println(A[i]);
            }
        }
    }
}

class sc {
    static BufferedReader reader;
    static StringTokenizer tokenizer;
 
    /** call this method to initialize reader for InputStream */
    static void init(InputStream input) {
        reader = new BufferedReader(
                     new InputStreamReader(input) );
        tokenizer = new StringTokenizer("");
    }
 
    /** get next word */
    static String next() throws IOException {
        while ( ! tokenizer.hasMoreTokens() ) {
            //TODO add check for eof if necessary
            tokenizer = new StringTokenizer(
                   reader.readLine() );
        }
        return tokenizer.nextToken();
    }
 
    static int nextInt() throws IOException {
        return Integer.parseInt( next() );
    }
     
    static double nextDouble() throws IOException {
        return Double.parseDouble( next() );
    }
 }