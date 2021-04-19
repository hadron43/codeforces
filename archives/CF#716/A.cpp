/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

ll T, n, in;

ll mulmod(ll a, ll b) {
    return (a*b) % modulo;
}

void solve() {
    bool ans = false;
    for(int i=0; i<n; ++i) {
        cin>>in;
        ll sq = sqrt(in);
        if(sq * sq != in) {
            ans = true;
        }
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
