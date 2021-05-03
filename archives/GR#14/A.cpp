/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<ll> arr;
// map<ll, ll> m;
ll T, n, x;

void solve() {
    arr.resize(n);
    for(ll &temp : arr)
        cin>>temp;
    sort(arr.begin(), arr.end());
    
    ll sum = 0;
    vector<ll> f, extras;
    for(ll temp : arr) {
        if(sum + temp == x) {
            extras.push_back(temp);
            continue;
        }
        f.push_back(temp);
        sum += temp;
    }
    for(ll extra : extras)
        f.push_back(extra);

    bool ans = true;
    sum = 0;
    for(int i=0; i<f.size(); ++i) {
        sum += f[i];
        if(sum == x) {
            ans = false;
            break;
        }
    }
    
    cout<<(ans?"YES":"NO")<<"\n";
    if(ans) {
        for(ll i : f)
            cout<<i<<" ";
        cout<<"\n";
    }
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>x;
        solve();
    }
}
