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
    vector<ll> leftCost(n), rightCost(n);

    ll count = 0;
    ll cost = 0;
    for(int i=0; i<n; ++i) {
        if(s[i] == '*')
            count++;
        else
            cost += count;
        rightCost[i] = cost;
    }

    count = 0;
    cost = 0;
    for(int i=n-1; i>=0; --i) {
        if(s[i] == '*')
            count++;
        else
            cost += count;
        leftCost[i] = cost;
    }
    ll ans = INT64_MAX;

    for(int i=0; i<n; ++i) {
        cost = rightCost[i];
        if(i+1 < n)
            cost += leftCost[i+1];
        ans = min(ans, cost);

        cost = leftCost[i];
        if(i-1 >= 0)
            cost += rightCost[i-1];
        ans = min(ans, cost);     
    }
    cout<<ans<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
