/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 2000001
typedef long long ll;
ll T, n, k;

ll mulmod(ll a, ll b) {
    return ((a%modulo)*(b%modulo)) % modulo;
}

ll submod(ll a, ll b) {
    return ((a%modulo)-(b%modulo)) % modulo;
}

void solve() {
    ll ans = 0;
    ans = n;
    for(ll i=1; i<k; ++i)
        ans = mulmod(ans, n);
    cout<<ans<<"\n";
}

int main() {
    cin>>T;
    
    for(int t=0; t<T; ++t) {
        cin>>n>>k;
        solve();
    }
}
