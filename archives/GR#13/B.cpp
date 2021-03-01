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
ll T, n, u, v, one , two;

void solve() {
    arr.resize(n);
    ll ans = INT64_MAX;

    for(auto &temp : arr)
        cin>>temp;

    for(int i=0; i<n-1; ++i) {
        if(abs(arr[i] - arr[i+1]) > 1) {
            ans = 0;
            break;
        }
        else if(abs(arr[i] - arr[i+1]) == 1) {
            one = u;
            two = v;
            if(arr[i] == 0 || arr[i] == 1000001)
                two = 2*v;
        }
        else {
            one = 2*v;
            two = u+v;
            if(arr[i] + 2 > 1000001 && arr[i] - 2 < 0)
                one = INT64_MAX;
        }
        ans = min(min(ans, one), two);
    }
    if(abs(arr[n-1]-arr[n-1]) == 1 &&arr[n-1] != 1000001)
        ans = min(min(ans, v), u);
    else
        ans = min(ans, 2*v);
    cout<<ans<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>u>>v;
        solve();
    }
}
