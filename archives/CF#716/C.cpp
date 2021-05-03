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
ll T, n, in;

ll gcd(ll a, ll b) { if (a == 0) return b; return gcd(b % a, a); }

void solve() {
    vector<ll> ans;
    ll mod = 1;
    for(ll i=1; i<n; ++i) {
        if(gcd(i, n) == 1) {
            ans.push_back(i);
            mod = (i*mod) % n;
        }
    }
    if(mod != 1) {
        cout<<ans.size()-1<<"\n";
        for(ll i=0; i<ans.size(); ++i)
            if(ans[i] != mod)
                cout<<ans[i]<<" ";
        cout<<"\n";
    }
    else {
        cout<<ans.size()<<"\n";
        for(ll i=0; i<ans.size(); ++i)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
}

int main() {
    // cin>>T;
    // for(ll t=0; t<T; ++t) {
        cin>>n;
        solve();
    // }
}
