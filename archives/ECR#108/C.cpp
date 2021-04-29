/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<vector<ll>> arr, pre;
map<ll, ll> m;
ll T, n, in;

void solve() {
    m.clear();
    arr.clear();
    pre.clear();
    arr.resize(n);
    pre.resize(n);
    for(int i=0; i<n; ++i) {
        cin>>in;
        m[i] = in-1;
    }

    for(int i=0; i<n; ++i) {
        cin>>in;
        arr[m[i]].push_back(in);
    }

    for(int i=0; i<n; ++i) {
        sort(arr[i].begin(), arr[i].end());
        pre[i].resize(arr[i].size()+1);
        pre[i][0] = 0;
        for(int j=0; j<arr[i].size(); ++j)
            pre[i][j+1] = pre[i][j] + arr[i][j];
    }

    set<int> avail;
    for(int i=0; i<n; ++i) {
        if(arr[i].size() > 0)
            avail.insert(i);
    }

    int teamsize = 1;
    vector<ll> ans(n+1);
    for(ll &x : ans) x = 0;
    while(!avail.empty() && teamsize <= n) {
        vector<int> toBeRemoved;
        ll newans = 0;
        for(int uni : avail) {
            if(teamsize > arr[uni].size()) {
                toBeRemoved.push_back(uni);
                continue;
            }
            int mod = arr[uni].size() % teamsize;
            newans += pre[uni].back() - pre[uni][mod];
        }
        for(int x : toBeRemoved)
            avail.erase(x);
        ans[teamsize] = newans;
        teamsize++;
    }

    for(int i=1; i<=n; ++i)
        cout<<ans[i]<<" ";
    cout<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
