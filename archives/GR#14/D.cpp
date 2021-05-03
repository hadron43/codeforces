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
ll T, n, l, r, in;

void solve() {
    vector<ll> left(n), right(n);
    for(ll &x : left) x = 0;
    for(ll &x : right) x = 0;
    ll lsum = 0, rsum = 0;

    for(int i=0; i<l; ++i) {
        cin>>in;
        left[in-1] ++;
        lsum ++;
    }

    for(int i=0; i<r; ++i) {
        cin>>in;
        right[in-1] ++;
        rsum ++;
    }

    for(int i=0; i<n; ++i) {
        ll mini = min(left[i], right[i]);
        left[i] -= mini;
        right[i] -= mini;
        lsum -= mini;
        rsum -= mini;
    }

    if(lsum > rsum) {
        ll temp = lsum;
        lsum = rsum;
        rsum = temp;
        vector<ll> tv = left;
        left = right;
        right = tv;
    }
    ll cost = 0;
    for(int i=0; i<n; ++i) {
        ll allowed = (rsum - lsum) / 2;
        ll pairs = min(right[i]/2 , allowed);
        rsum -= pairs * 2;
        right[i] -= pairs * 2;
        cost += pairs;
    }

    cost += lsum;
    cost += 2 * ((rsum - lsum)/2);
    cout<<cost<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>l>>r;
        solve();
    }
}
