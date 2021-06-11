/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo (int)(1e9 + 7)
#define maxsize (int)(2e5)
typedef long long ll;

// vector<ll> arr;
// map<ll, ll> m;
ll T, l, r;

void solve() {
    ll ans = 0;
    ll diff = r - l;
    while(r) {
        ans += r;
        r /= 10;
    }
    while(l) {
        ans -= l;
        l /= 10;
    }
    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>l>>r;
        solve();
    }
}
