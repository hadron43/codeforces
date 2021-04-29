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
ll T, r, b, d;

void solve() {
    if(r > b) {
        int temp = r;
        r = b;
        b = temp; 
    }
    if(r*(1+d) < b)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>r>>b>>d;
        solve();
    }
}
