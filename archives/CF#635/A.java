import java.util.*;

public class A{

    public static boolean check(int i, int j, int k){
        double s = (double)(i+j+k)/2.0;
        if(s==i || s==j || s==k)
            return false;
        else
            return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            int a,b,c,d;
            a = sc.nextInt(); b = sc.nextInt();
            c = sc.nextInt(); d = sc.nextInt();

            
            int x,y,z;
            if(a+b>c){
                x=a; y=b; z=c;

                while(!check(x, y, z)){
                    if(x!=b)
                        x++;
                    else if(y!=b)
                        y++;
                    else
                        z++;
                }
            }
            else{
                x=a; y=c; z=c;

                while(!check(x, y, z)){
                    if(x!=b)
                        x++;
                    else if(y!=b)
                        y--;
                    else
                        z++;
                }
            }

            
            System.out.println(x+" "+y+" "+z);
        }
    }
}