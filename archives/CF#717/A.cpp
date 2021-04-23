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
// map<ll, ll> m;
ll T, n, k, in;

void solve() {
    arr.resize(n);
    for(ll &temp : arr)
        cin>>temp;
    ll inc = 0;
    for(int i=0; i<n && k > 0; ++i) {
        ll m = min(arr[i], k);
        arr[i] -= m;
        k -= m;
        inc += m;
    }
    arr[n-1] += inc;
    for(int i=0; i<n; ++i)
        cout<<arr[i]<<" ";
    cout<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>k;
        solve();
    }
}
