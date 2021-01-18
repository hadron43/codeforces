import java.util.*;

public class B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            int x = sc.nextInt();
            int n = sc.nextInt();
            int m = sc.nextInt();
            Dragon d = new Dragon(x, n, m);
            while(d.flag)
                d.hit();
            if(d.x<=0)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}

class Dragon{
    int x;
    int n,m;
    boolean flag;

    Dragon(int x, int n, int m){
        this.x = x;
        this.n = n;
        this.m = m;
        flag = true;
    }

    void Absorptions(){
        this.x = this.x/2 + 10;
        n--;
    }

    void Lightening(){
        this.x -= 10;
        m--;
    }

    void hit(){
        if(n>0){
            if(x/2>=10)
                Absorptions();
            else if(m>0)
                Lightening();
            else
                flag = false;
        }
        else{
            if(m>0)
                Lightening();
            else
                flag = false;
        }

        if(x<=0)
            flag = false;
    }
}