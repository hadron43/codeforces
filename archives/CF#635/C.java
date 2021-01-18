import java.util.*;

public class C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); int k = sc.nextInt();
        
        Node list[] = new Node[n];
        for(int i=0; i<n; ++i)
            list[i] = new Node();

        for(int i=0; i<n-1; ++i){
            int a = sc.nextInt();
            int b = sc.nextInt();
            if(a<b){
                list[a-1].addChild(list[b-1]);
                list[b-1].addParent(list[a-1]);
            }
            else{
                list[a-1].addParent(list[b-1]);
                list[b-1].addChild(list[a-1]);
            }
        }

        Node root = null;
        for(int i=0; i<n; ++i){
            if(list[i].parent==list[i]){
                root = list[i];
                break;
            }
        }

        Stack<Node> leafs = new Stack<Node>();

        Queue<Node> queue = new LinkedList<Node>();
        root.height = 0; 
        queue.add(root); 
        while (!queue.isEmpty())  
        {
            Node tempNode = queue.poll();

            // if(tempNode.child.size()==0){
                leafs.add(tempNode);
                // continue;
            // }
  
            while(tempNode.child.size()>0){
                Node t = tempNode.child.remove(0);
                t.height = tempNode.height + 1;
                queue.add(t);
            }
        }
        
        long ans = 0;
        while(k>0){
            ans+= leafs.pop().height;
            k--;
        }

        System.out.println(ans);
    }
}

class Node{
    Node parent;
    ArrayList<Node> child;
    int height;

    Node(){
        parent = this;
        child = new ArrayList<Node>();
    }

    void addParent(Node n){
        this.parent = n;
    }

    void addChild(Node n){
        child.add(n);
    }
}