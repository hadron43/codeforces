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
ll T, n, l, r, in;

void solve() {
    arr.resize(n);
    for(ll &x : arr)
        cin>>x;
    sort(arr.begin(), arr.end());
    ll ans = 0;
    for(ll i=0; i<n; ++i) {
        ll left = lower_bound(arr.begin(), arr.end(), l - arr[i]) - arr.begin();
        left = max(i+1, left);
        ll right = upper_bound(arr.begin(), arr.end(), r - arr[i]) - arr.begin();

        if(right > left)
            ans += right - left;
    }

    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>l>>r;
        solve();
    }
}
