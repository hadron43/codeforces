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
ll T, a, b, ans;

void rec(ll a, ll b, ll k) {
    if(k > ans)
        return;
    if(a < b) {
        ans = min(ans, k);
        return;
    }

    if(b == 1) {
        rec(a, b+1, k+1);
        return;
    }

    rec(a/b, b, k+1);
    rec(a, b+1, k+1);
}

void solve() {
    ans = INT64_MAX;
    rec(a, b, 1);
    cout<<ans<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>a>>b;
        solve();
    }
}
