/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1e9+7
#define maxsize 2*1e5
typedef long long ll;

vector<ll> v;
// map<ll, ll> m;
ll T, n, in;

void solve() {
    v.resize(n);
    for(auto &x : v)
        x = 0;
    for(int i=0; i<n; ++i) {
        cin>>in;
        v[in-1]++;
    }
    ll ans = *max_element(v.begin(), v.end());
    cout<<ans<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}