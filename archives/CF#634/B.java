import java.util.*;

public class B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            int n = sc.nextInt(),
                a = sc.nextInt(),
                b = sc.nextInt();
            

            StringBuilder s = new StringBuilder();
            for(int i=0; i<b; ++i)
                s.append(Character.toString((char)(97+i)));
            for(int i=b; i<a; ++i)
                s.append(s.charAt(i-b));
            for(int i=a; i<n; ++i)
                s.append(s.charAt(i-a));
            System.out.println(s.toString());
        }
    }
}