/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<pair<ll, ll>> arr;
map<ll, ll> mp;
ll T, n, m, x;

void solve() {
    arr.resize(n);
    for(int i=0; i<n; ++i) {
        cin >> arr[i].first;
        arr[i].second = i+1;
    }
    sort(arr.begin(), arr.end());

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    for(int i=0; i<m; ++i) {
        pq.push({0, i+1});
    }

    mp.clear();
    for(int i=0; i<n; ++i) {
        pair<ll, ll> tp = pq.top();
        pq.pop();
        tp.first += arr[i].first;
        mp[arr[i].second] = tp.second;
        pq.push(tp);
    }

    ll maxh = 0, minh = INT64_MAX;
    while(!pq.empty()) {
        pair<ll, ll> tp = pq.top();
        pq.pop();
        minh = min(minh, tp.first);
        maxh = max(maxh, tp.first);
    }

    if(maxh-minh > x) {
        cout<<"NO\n";
    }
    else {
        cout<<"YES\n";
        for(int i=1; i<=n; ++i)
            cout<<mp[i]<<" ";
        cout<<"\n";
    }
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>m>>x;
        solve();
    }
}
