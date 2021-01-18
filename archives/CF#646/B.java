import java.util.*;

public class B{

    // static int solve(String s){
    //     StringBuilder b = new StringBuilder(s);
    //     int count = 0;
    //     for(int i=0; i<b.length()-2; ++i){
            
    //     }
    // }


    // static int solve(String s){
        
    //     StringBuilder build = new StringBuilder(s);

    //     if(s.charAt(0)=='1'){
    //         build = build.reverse();
    //     }

    //     int i=0, j = s.length() - 1;
    //     int swaps = 0;

    //     while(i<j){
    //         while(i<build.length() && build.charAt(i)=='0')
    //             i++;

    //         while(j>=0 && build.charAt(j)=='1')
    //             j--;

    //         if(i<j){
    //             build.setCharAt(i, '0');
    //             build.setCharAt(j, '1');

    //             swaps++;
    //             i++;
    //             j--;
    //         }
    //     }
    //     return swaps;
    // }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            String s = sc.next();
            System.out.println(solve(s));
        }
        sc.close();
    }
}