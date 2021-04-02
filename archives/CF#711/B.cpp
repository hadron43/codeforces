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
ll m[64], ex[64];
ll T, n, W, in;

vector<ll> sum_of_2(ll x) {
    vector<ll> v;
    queue<ll> s;
    while(x > 0) {
        s.push(x % 2);
        x /= 2;
    }
    ll temp = 0;
    while(s.size() > 0) {
        ll t = s.front();
        s.pop();
        if(t)
            v.push_back(temp);
        temp ++;
    }
    return v;
}

void solve() {
    memset(m, 0, 64*sizeof(ll));
    memset(ex, 0, 64*sizeof(ll));
    vector<ll> v = sum_of_2(W);
    reverse(v.begin(), v.end());
    for(int i=0; i<v.size(); ++i)
        ex[v[i]]++;
    for(int i=0; i<n; ++i) {
        cin>>in;
        m[sum_of_2(in)[0]] ++;
    }
    ll ans = 0;
    ll remain = n;
    while(remain > 0) {
        ll temp = 0;
        for(int i=63; i>=0; --i) {
            temp += ex[i];
            ll take = min(m[i], temp);
            m[i] -= take;
            remain -= take;
            temp -= take;
            temp *= 2;
        }
        ans ++;
    }
    cout<<ans<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>W;
        solve();
    }
}
