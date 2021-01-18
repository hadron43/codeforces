import java.util.*;

public class C {
    public static int countPair(HashMap<Integer, Integer> hm, int arr[], int x){
        int ans = 0;
        for (int i=0; i<arr.length; i++){ 
            int diff = x - arr[i];
            if(hm.containsKey(diff) && hm.get(diff)>0){
                if(diff == arr[i] && hm.get(diff)<2)
                    continue;

                if(hm.get(arr[i])<=0)
                    continue;
                
                ans ++;
                hm.put(arr[i], hm.get(arr[i]) -1);
                hm.put(diff, hm.get(diff) -1);
            }
        } 
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int t=0; t<T; ++t) {
            int n = sc.nextInt();
            int w[] = new int[n];
            for(int i=0; i<n; ++i)
                w[i] = sc.nextInt();

            HashMap<Integer, Integer> count = new HashMap<>();
            for(int i=0; i<n; ++i){
                if(!count.containsKey(w[i]))
                    count.put(w[i], 0);
                count.put(w[i], count.get(w[i]) + 1);
            }

            int max = 0;
            for(int i=2; i<101; ++i){
                int r = countPair((HashMap<Integer, Integer>)count.clone(), w, i);
                if(r>max)
                    max = r;
            }
            System.out.println(max);
        }
    }
}