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
    string s;
    cin>>s;
    bool ans = false;
    for(int i=0; i<n; ++i) {
        int j=i;
        while( j < n && s[i] == s[j]) j++;
        for(; j<n; ++j) {
            
            if(j < n && s[i] == s[j]) {
                ans = true;
                break;
            }
        }
    }
    cout<<(ans ? "NO" : "YES")<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
