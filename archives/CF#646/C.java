import java.util.*;

public class C {

    private static int distance(ArrayList<Integer>[] adj, int s) {
        int n = adj.length;        
        int dist[] = new int[n];
        int prev[] = new int[n];
        
        for(int i=0; i<n; ++i){
            dist[i] = -1;
            prev[i] = -1;
        }
        dist[s] = 0;
        prev[s] = s;
        Queue<Integer> q = new LinkedList<Integer>();
        q.add(s);

        while(!q.isEmpty()){
            int x = q.poll();

            if(adj[x].size()==1){
                int count = 0;
                do{
                    count += adj[x].size();
                    x = prev[x];
                }while(prev[x]!=x);
                return count;
            }

            for(int i: adj[x]){
                if(dist[i]==-1){
                    prev[i] = x;
                    dist[i] = dist[x] + 1;
                    q.add(i);
                }
            }
        }

        return -1;
    }

    public static void main(String[] args) {
        Scanner Reader = new Scanner(System.in);
        int T = Reader.nextInt();
        
        for(int t=0; t<T; ++t){
            int n = Reader.nextInt();
            int x = Reader.nextInt();

            ArrayList<Integer>[] adj = (ArrayList<Integer>[])new ArrayList[n];
            for (int i = 0; i < n; i++) {
                adj[i] = new ArrayList<Integer>();
            }

            for (int i = 0; i < n-1; i++) {
                int a, b;
                a = Reader.nextInt();
                b = Reader.nextInt();
                adj[a - 1].add(b - 1);
                adj[b - 1].add(a - 1);
            }

            int count = distance(adj, x);
            if(count%2==0)
                System.out.println("Ashish");
            else
                System.out.println("Ayush");
            Reader.close();
        }
    }
}