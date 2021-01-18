import java.util.*;
public class C {

    public static void print(char A[]){
        for(char c:A)
            System.out.print(c);
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            int n = sc.nextInt();
            String inp = sc.next();
            int mode = 0;
            char ans1[] = new char[n];
            char ans2[] = new char[n];

            for(int i=0; i<n; ++i){
                char c = inp.charAt(i);
                if(mode==0){
                    if(c=='2'){
                        ans1[i] = ans2[i] = '1';
                    }
                    else if(c=='0')
                        ans1[i] = ans2[i] = '0';
                    else{
                        ans1[i] = '1';
                        ans2[i] = '0';
                        mode = 1;
                    }
                }
                else{
                    if(c=='2'){
                        ans1[i] = '0';
                        ans2[i] = '2';
                    }
                    else if(c=='0')
                        ans1[i] = ans2[i] = '0';
                    else{
                        ans1[i] = '0';
                        ans2[i] = '1';
                        mode = 1;
                    }
                }
            }
            print(ans1); print(ans2);
        }
    }
}