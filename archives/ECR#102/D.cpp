/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

string s;
// map<ll, ll> m;
ll T, n, m, in, l, r;

struct node {
    ll value, mini, maxi;

    node() {
        value = 0;
        mini = 0;
        maxi = 0;
    }

    node(node &x) {
        value = x.value;
        mini = x.mini;
        maxi = x.maxi;
    }

    void inc() {
        value++;
        if(value > maxi)
            maxi = value;
    }

    void dec() {
        value--;
        if(value < mini)
            mini = value;
    }

    node operator + (char c) {
        node n(*this);
        (c == '+') ? n.inc() : n.dec();
        return n;
    }

    node operator - (char c) {
        node n(*this);
        (c == '+') ? n.dec() : n.inc();
        return n;
    }
};

void solve() {
    cin>>s;
    vector<node> pre(n), suf(n);
    
    for(int i=0; i<n; ++i) {
        pre[i] = pre[(i>0)?(i-1):i] + s[i];
        suf[n-i-1] = suf[(i>0)?(n-i):(n-i-1)] - s[n-i-1];
    }

    for(int i=0; i<m; ++i) {
        cin>>l>>r;
        l-=2;
        node x;

        if(l >= 0)
            x = pre[l];
        
        if(r != n) {
            x.mini = min(x.mini, x.value + suf[r].mini - suf[r].value);
            x.maxi = max(x.maxi, x.value + suf[r].maxi - suf[r].value);
        }
        cout<<x.maxi + abs(x.mini) + 1<<endl;
    }
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>m;
        solve();
    }
}


/*
Rough Work
    value   min     max
+   1       0       1
-   0       -1      0
-   -1      -2      0
+   0       -1      0
+   1       0       1
+   2       0       2
*/