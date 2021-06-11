/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo (int)(1e9 + 7)
#define maxsize (int)(2e5)
typedef long long ll;

vector<ll> arr;
// map<ll, ll> m;
ll T, n, in;

void solve() {
    arr.resize(n);
    for(ll &x : arr)
        cin>>x;
    
    int mx = max_element(arr.begin(), arr.end()) - arr.begin();
    int mn = min_element(arr.begin(), arr.end()) - arr.begin();

    ll ans = max(mx, mn) + 1;
    ans = min(ans, n - min(mx, mn));
    ans = min(ans, min(mx, mn) + 1 + n - max(mx, mn));
    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
