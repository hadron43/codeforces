/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1e7 + 9
#define maxsize 2e5
typedef long long ll;

// vector<ll> arr;
// map<ll, ll> m;
ll T, in, n;
string s;

ll NC2(ll n) {
    return n * (n+1) / 2;
}

void solve() {
    ll l = 0, r = 0, ans = 0, last = 0;
    
    while(r < n && s[r] == '?') r++;
    char value = (s[r] == '0') ? '1' : '0';
    last = r;

    while(r < n) {
        if(value == s[r]) {
            ans += NC2(r-l);
            ans -= NC2(r-(last+1));
            l = last + 1;
            (value == '0') ? value++ : value--;
        }

        if(s[r] != '?')
            last = r;

        (value == '0') ? value++ : value--;
        r++;
    }

    ans += NC2(r-l);
    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>s;
        n = s.length();
        solve();
    }
}
