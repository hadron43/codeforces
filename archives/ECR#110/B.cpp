/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1e7 + 9
#define maxsize 2e5
typedef long long ll;

// map<ll, ll> m;
ll T, n, in;

ll gcd(ll a, ll b) { if (a == 0) return b; return gcd(b % a, a); }

void solve() {
    int ans = n * (n-1) / 2;
    vector<ll> odds;
    for(int i=0; i<n; ++i) {
        cin>>in;
        if(in % 2)
            odds.push_back(in);
    }

    for(int i=0; i<odds.size(); ++i) {
        for(int j=i+1; j<odds.size(); ++j) {
            if(gcd(odds[i], odds[j]) == 1)
                ans--;
        }
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
