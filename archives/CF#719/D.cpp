/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<ll> arr;
map<ll, ll> m;
ll T, n, in;

void solve() {
    arr.resize(n);
    for(ll &x : arr)    cin>>x;
    for(int i=0; i<n; ++i)
        arr[i] -= i;
    
    m.clear();
    ll ans = 0;
    for(int i=0; i<n; ++i) {
        ans += m[arr[i]];
        m[arr[i]]++;
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
