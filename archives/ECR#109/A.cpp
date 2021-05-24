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
    in = 100 - n;
    ll g = gcd(in, n);
    in /= g;
    n /= g;
    cout<<in+n<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
