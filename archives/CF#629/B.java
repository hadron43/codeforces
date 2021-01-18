
import java.util.ArrayList;
import java.util.Scanner;

public class A{

    static int list[];

    // static int binarySearch(int lo, int hi, int x){
    //     if(lo<=hi){
    //         int mid = (lo+hi)/2;
    //         if(list[mid])
    //     }
    // }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        ArrayList<Integer> no = new ArrayList<>();
        no.add(1);
        for(int i=2; ; ++i){
            int sum = no.get(i-2) + i;
            if(sum>10000)
                break;
            else
                no.append(sum);
        }

        list = new int[no.size()];
        for(int i=0; i<no.size(); ++i)
            list[i] = no.get(i);

        int T = sc.nextInt();
        for(int t=0; t<T; ++t){
            int n = sc.nextInt();
            
        }
        sc.close();
    }
}