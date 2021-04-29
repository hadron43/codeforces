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
ll T, n, m, k;

void solve() {
    if(n > m) {
        int temp = n;
        n = m;
        m = temp;
    }
    if(k == (n-1) + (m-1)*n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>m>>k;
        solve();
    }
}
