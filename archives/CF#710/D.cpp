/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

map<int, int> m;
priority_queue<int> q;
int T, n, in;

void solve() {
    m.clear();
    while(!q.empty())   q.pop();
    for(int i=0; i<n; ++i) {
        cin>>in;
        m[in] = m[in] + 1;
    }
    for(auto i=m.begin(); i!=m.end(); ++i)
        q.push(i->second);

    while(q.size() > 1) {
        ll f = q.top();
        q.pop();
        ll f1 = q.top();
        q.pop();
        
        f--;
        f1--;
        if(f1)
            q.push(f1);
        if(f)
            q.push(f);
    }

    cout<<(q.empty() ? 0 : q.top())<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}


/*
2 3
2 2 2 3 3 4 4 5
*/