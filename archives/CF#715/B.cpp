/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

// map<ll, ll> m;
ll T, n, in;
string s;

void solve() {
    cin>>s;
    bool ans = true;
    int t = 0, m = 0;
    for(int i=0; i<n && ans; ++i) {
        if(s[i] == 'T')
            t++;
        else if(s[i] == 'M')
            m++;
        if(m > t) {
            ans = false;
            break;
        }
    }
    t = 0, m = 0;
    for(int i=n-1; i>=0 && ans; --i) {
        if(s[i] == 'T')
            t++;
        else if(s[i] == 'M')
            m++;
        if(m > t) {
            ans = false;
            break;
        }
    }
    if(ans && (t == 2*m))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
/*
0 1 2 3 4 5
T M T M T T
*/