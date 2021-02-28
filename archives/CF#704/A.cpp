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
ll T, n, p, a, b, c, ans;

void value (ll &ans, ll &a, ll &p) {
    if(p % a == 0)
        ans = 0;
    else {
        ans = min(ans, a - p%a);    
    }
}

void solve() {
    cin>>p>>a>>b>>c;
    ans = INT64_MAX;
    value(ans, a, p);
    value(ans, b, p);
    value(ans, c, p);
    cout<<ans<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        // cin>>n;
        solve();
    }
}
