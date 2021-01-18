import java.util.*;
public class C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            int a =sc.nextInt();
            int b = sc.nextInt();

            if(a>=2*b){
                System.out.println(b);
                continue;
            }
            if(b>=2*a){
                System.out.println(a);
                continue;
            }

            if(b>a){
                int temp = a;
                a = b;
                b = temp;
            }

            int t1 = a/3;
            int t2 = b/3;

            int count = 0;
            if(t1<t2){
                count = 2*t1;
                a -= 3*t1;
                b -= 3*t1;
            }
            else{
                count  = 2*t2;
                a -= 3*t2;
                b -= 3*t2;
            }

            if(a>0 && b>1 || a>1 && b>0)
                count++;

            System.out.println(count);
        }
    }
}