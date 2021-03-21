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
ll T, n, k1, k2;

void solve() {
    int mini = min(k1, k2);
    int white, black;
    white = mini + (k1 + k2 - 2*mini) / 2;
    
    mini = n - max(k1, k2);
    black = mini + (2*n - k1 - k2 - 2*mini) / 2;

    int w, b;
    cin>>w>>b;
    if(w <= white && b <= black)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>k1>>k2;
        solve();
    }
}
