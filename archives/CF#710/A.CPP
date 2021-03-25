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
ll T, n, m, x;

void solve() {
    ll r = (x % n);
    ll c = x / n;
    if(r)
        c++;
    if(r == 0)
        r = n;

    cout<<(r-1)*m + c<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>m>>x;
        solve();
    }
}
