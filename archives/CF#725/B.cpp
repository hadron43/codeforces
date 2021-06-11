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
    ll sum = 0;
    for(ll x : arr)
        sum += x;
    int ans = -1;
    if(sum % n == 0) {
        ans = 0;
        ll target = sum / n;
        for(int i=0; i<n; ++i)
            ans += arr[i] > target;
    }

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
