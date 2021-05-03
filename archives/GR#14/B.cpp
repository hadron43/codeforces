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

void solve() {
    bool ans = false;
    if(n % 4 == 0) {
        n = n/4;
        ll sq = sqrt(n);
        if(sq*sq == n)
            ans = true;
        n *= 4;
    }
    if(n % 2 == 0) {
        n = n/2;
        ll sq = sqrt(n);
        if(sq*sq == n)
            ans = true;
    }
    cout<<(ans?"YES":"NO")<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
