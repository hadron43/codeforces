/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<ll> v[2], pre[2], mini[2], cost[2];
// map<ll, ll> m;
ll T, n, in;

void pre_calc(int i) {
    int s = v[i].size();
    
    pre[i].resize(s);
    mini[i].resize(s);
    cost[i].resize(s);

    pre[i][0] = v[i][0];
    mini[i][0] = v[i][0];

    for(int j=1; j<s; ++j) {
        pre[i][j] = pre[i][j-1] + v[i][j];
        mini[i][j] = min(mini[i][j-1], v[i][j]);
    }

    for(int j=0; j<s; ++j) {
        int remain = n - j - 1;
        cost[i][j] = pre[i][j] + remain * mini[i][j];
    }
}

void solve() {
    v[0].clear(); v[1].clear();

    for(int i=1; i<=n; ++i) {
        cin>>in;
        v[i%2].push_back(in);
    }

    pre_calc(0);
    pre_calc(1);

    ll ans = cost[0][0] + cost[1][0];
    for(int i=1; i<v[1].size(); ++i) {
        ll temp = cost[0][i-1];
        if(i < v[0].size())
            temp = min(temp, cost[0][i]);
        temp += cost[1][i];

        ans = min(ans, temp);
    }
    cout<<ans<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
