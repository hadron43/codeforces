/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

// vector<int> arr;
// map<int, int> m;
int T, N, in1, in2;
int weights[maxsize], deg[maxsize];
priority_queue<pair<int, int>> pq;

void solve() {
    ll sum = 0;
    for(int i=0; i<N; ++i) {
        cin>>weights[i];
        sum += weights[i];
    }

    memset(deg, 0, N*sizeof(int));
    for(int i=0; i<N-1; ++i) {
        cin>>in1>>in2;
        deg[in1-1] ++;
        deg[in2-1] ++;
    }

    while(!pq.empty())
        pq.pop();
    
    pair<int, int> p;
    for(int i=0; i<N; ++i){
        deg[i]--;

        if(deg[i] <= 0)
            continue;
        
        p.first = weights[i];
        p.second = deg[i];
        pq.push(p);
    }

    cout<<sum<<" ";
    
    for(int i=0; i<N-2; ++i) {
        p = pq.top();
        pq.pop();

        sum += p.first;

        p.second --;
        if(p.second > 0) {
            pq.push(p);
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N;
        solve();
    }
}