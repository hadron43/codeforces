#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX_SIZE 200000
vector<int> graph[MAX_SIZE];
vector<int> cycle;
stack<int> trace;

void print_cycle() {
    cout<<"cycle: ";
        for(int n: cycle)
            cout<<n<<" ";
    cout<<endl;
}

void clean_graph(int size = MAX_SIZE) {
    for(int i=0; i<size; ++i)
        graph[i].clear();
    cycle.clear();
}

void add_edge(int u, int v) {
    graph[u-1].push_back(v);
    graph[v-1].push_back(u);
}

int find_cycle(int node, int parent, bool visited[]) {
    if(visited[node-1]) {
        while(!trace.empty()) {
            cycle.push_back(trace.top());
            if(trace.top() == node){
                break;
            }
            trace.pop();
        }

        while(!trace.empty())
            trace.pop();
        // print_cycle();
        return -1;
    }

    visited[node-1] = true;
    trace.push(node);

    for(int n : graph[node-1]) {
        if(n != parent && find_cycle(n, node, visited) == -1)
            return -1;
    }

    trace.pop();
    visited[node-1] = false;
    return 0;
}

void num_of_nodes(int node, int blocked1, int blocked2,
 int &ans, bool visited[]) {
    if(visited[node-1])
        return;
    ans++;
    visited[node-1] = true;

    for(int n: graph[node-1])
        if(n!=blocked1 && n!=blocked2)
            num_of_nodes(n, blocked1, blocked2, ans, visited);
}

ll NC2(ll N) {
    if(N < 2)
        return 0;
    return (N * (N-1)) / 2;
}

int main() {
    int T, N, temp, p, q;
    cin>>T;

    for(int t=0; t<T; ++t) {
        cin>>N;
        clean_graph();

        for(int i=0; i<N; ++i) {
            cin>>p>>q;
            add_edge(p, q);
        }

        bool *visited = new bool[N];
        memset(visited, 0, N);
        find_cycle(1, 0, visited);

        ll ans = NC2(N) * 2;

        // print_cycle();

        for(int i=0; i<cycle.size(); ++i) {
            temp = 0;
            memset(visited, 0, N);
            int blocked1 = cycle[((i-1)>=0)?(i-1):(cycle.size()-1)];
            int blocked2 = cycle[(i+1)%cycle.size()];
            num_of_nodes(cycle[i], blocked1, blocked2, temp, visited);
            ans -= NC2(temp);
        }

        cout<<ans<<endl;
        delete visited;
    }
}