import java.io.*;
import java.util.*;
 
public class C {
 
    static double calc(int h, int c, long x){
        return (double)((long)x*h + (long)(x-1)*c)/(x + (x-1));
    }
 
    static long binarySearch(long l, long u, int h, int c, int t){
        if(l>u)
            return l;
 
        long mid = (l + u)/2;
        double c1 = calc(h, c, mid);
        double c2 = calc(h, c, mid+1);
 
        if(c1>=t && c2<=t)
            return mid;
        
        if(c1>=t)
            return binarySearch(mid+1, u, h, c, t);
 
        return binarySearch(l, mid-1, h, c, t);
    }
 
    static double diff(double d1, double d2){
        return Math.abs(d1-d2);
    }
 
    public static void main(String[] args) throws IOException{
        Reader.init(System.in);
        int T = Reader.nextInt();
        for(int k=0; k<T; ++k){
            int h = Reader.nextInt();
            int c = Reader.nextInt();
            int t = Reader.nextInt();
 
            double d0 = diff(h, t);
            double d1 = diff((double)(h+c)/2, t);
            long res = binarySearch(2, Integer.MAX_VALUE, h, c, t);
            double d2 = diff(calc(h, c, res), t);
            double d3 = diff(calc(h, c, res+1), t);
 
            if(d0<=d1 && d0<=d2 && d0<d3)
                System.out.println(1);
            else if(d1<=d2 && d1<=d3)
                System.out.println(2);
            else if(d2<=d3)
                System.out.println(2*res - 1);
            else
                System.out.println(2*res + 1);            
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