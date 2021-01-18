/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 300000
typedef long long ll;

// map<int, int> m;
ll T, n[3], s[3], m[3], in;

ll sum(int ind) {
    ll &var = s[ind];
    var = 0;
    m[ind] = INT64_MAX;
    for(int i=0; i<n[ind]; ++i) {
        cin>>in;
        var += in;
        m[ind] = min(m[ind], in);
    }
    return var;
}

void solve() {
    ll total = 0;
    for(int i=0; i<3; ++i)
        total += sum(i);

    vector<ll> candi;
    for(int i=0; i<3; ++i) {
        candi.push_back(s[i]);
        for(int j=i+1; j<3; ++j) {
            candi.push_back(m[i] + m[j]);
        }
    }
    ll mini = INT64_MAX;
    for(ll x: candi) {
        mini = min(mini, x);
    }

    total -= 2*mini;
    cout<<total<<endl;
}

int main() {
    cin>>n[0]>>n[1]>>n[2];
    solve();
}
