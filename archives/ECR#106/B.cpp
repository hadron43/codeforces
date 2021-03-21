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
ll T;
string s;

void solve() {
    bool doubleone = false, ans = true;
    for(int i=1; i<s.size() && ans; ++i) {
        if(s[i-1]=='1' && s[i]=='1')
            doubleone = true;
        else if(doubleone && s[i-1]=='0' && s[i]=='0')
            ans = false;
    }

    cout<<((ans)?"YES":"NO")<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>s;
        solve();
    }
}
