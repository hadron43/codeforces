import java.util.*;
import java.io.*;

public class B {

    static void swap(int[] a, int b[], int i, int j){
        int tempa = a[i];
        int tempb = b[i];

        a[i] = a[j];
        b[i] = b[j];
        
        a[j] = tempa;
        b[j] = tempb;
    }

    public static void main(String[] args) throws IOException{
        Reader.init(System.in);
        int T = Reader.nextInt();
        for(int t=0; t<T; ++t){
            int n = Reader.nextInt();
            int a[] = new int[n], b[] = new int[n];
            for(int i=0; i<n; ++i)
                a[i] = Reader.nextInt();

            for(int i=0; i<n; ++i)
                b[i] = Reader.nextInt();
            
            boolean ans = true;

            int sort[] = a.clone();
            Arrays.sort(sort);
            for(int i=0; i<n; ++i){
                if(a[i]!=sort[i]){
                    int tpos = -1, kpos = -1;
                    for(int j=i+1; j<n; ++j){
                        if(a[j]==sort[i]){
                            if(b[i]!=b[j]){
                                tpos = j;
                                kpos = j;
                                break;
                            }
                            else
                                tpos = j;
                        }
                        else if(b[i]!=b[j]){
                            kpos = j;
                        }
                    }

                    if(tpos==-1 || kpos==-1){
                        int j = i-1;
                        while(j>=0 && a[j]==a[tpos]){
                            if(b[j]!=b[tpos]){
                                swap(a, b, tpos, j);
                                break;
                            }
                            j--;
                        }

                        if(b[i]!=b[tpos]){
                            swap(a, b, i, tpos);
                            continue;
                        }
                        else{
                            ans = false;
                            break;
                        }
                        
                    }

                    if(tpos == kpos){
                        swap(a, b, i, tpos);
                    }
                    else{
                        swap(a, b, i, kpos);
                        swap(a, b, i, tpos);
                    }

                }
            }
            

            if(ans)
                System.out.println("Yes");
            else
                System.out.println("No");
        }
    }

    static class Reader {
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
}