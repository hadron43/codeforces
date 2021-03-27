/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

// vector<ll> arr;
// map<ll, ll> m;
int T, q, m;
int ctr = 0;

class Compare {
public:
    bool operator() (pair<int, int> p1, pair<int, int> p2){
        if(p1.first == p2.first)
            return p2.second < p1.second;
        return p2.first > p1.first;
    }
};

unordered_set<int> s;
priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
queue<int> qu;

void solve() {
    cin>>q;
    qu.push(0);
    pq.push({0, 0});
    s.insert(0);
    if(q == 1) {
        cin>>m;
        pq.push({m, ++ctr});
        qu.push(ctr);
    }
    else if(q==2) {
        int t = 0;
        while(s.find(t) != s.end()) {
            t = qu.front();
            qu.pop();
        }
        s.insert(t);
        cout<<t<<" ";
    }
    else {
        pair<int, int> t = {0, 0};
        while(s.find(t.second) != s.end()) {
            t = pq.top();
            pq.pop();
        }
        s.insert(t.second);
        cout<<t.second<<" ";
    }
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        solve();
    }
}
