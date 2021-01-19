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
string s, ans;

void solve() {
    cin>>s;
    ans = "0";
    ans[0] = min(49, '2' - s[0] + 48);
    for(int i=1; i<n; ++i) {
        if(ans[i-1] + s[i-1] - 2*48 == 2) {
            ans += '1' - s[i] + 48;
        }
        else if(ans[i-1] + s[i-1] - 2*48 == 1) {
            ans += (s[i]=='1') ? '1' : '0' ;
        }
        else {
            ans += min(49, '2' - s[0] + 48);
        }
    }

    cout<<ans<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
