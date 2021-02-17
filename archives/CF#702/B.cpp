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
ll T, n, in;

void solve() {
    arr.resize(n);
    for(ll &temp : arr)
        cin>>temp;
    ll c[3] = {0, 0, 0};

    for(ll temp : arr)
        c[temp % 3] ++;

    ll target = n/3;
    ll ans = 0;
    while(c[0]!=target || c[1]!=target || c[2]!=target) {
        if(c[2]>target) {
            ans += c[2] - target;
            c[0] += c[2] - target;
            c[2] = target;
        }
        if(c[0]>target) {
            ans += c[0] - target;
            c[1] += c[0] - target;
            c[0] = target;
        }
        if(c[1]>target) {
            ans += c[1] - target;
            c[2] += c[1] - target;
            c[1] = target;
        }
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
