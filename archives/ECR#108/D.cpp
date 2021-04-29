/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<vector<ll>> mat;
vector<ll> a, b;
vector<ll> pre;
ll T, n, in;

ll calc(int i, int j) {
    if(i == j)
        return mat[i][j];
    if(i > j)
        return 0;
    ll ans = 0;
    if(mat[i][j] != -INT64_MAX) {
        ans += mat[i][j];
    }
    else {
        ans += a[i] * b[j];
        ans += b[i] * a[j];
        ans += calc(i+1, j-1);
    }
    mat[i][j] = ans;
    return ans;
}

void solve() {
    mat.clear();
    mat.resize(n); pre.resize(n);
    a.resize(n); b.resize(n);
    for(int i=0; i<n; ++i)  mat[i].resize(n);

    for(ll &x : a) cin>>x;
    for(ll &x : b) cin>>x;

    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            mat[i][j] = -INT64_MAX;

    for(int i=0; i<n; ++i)
        mat[i][i] = a[i] * b[i];

    pre[0] = a[0] * b[0];
    for(int i=1; i<n; ++i)
        pre[i] = pre[i-1] + a[i]*b[i];
    
    ll ans = pre[n-1];
    for(int i=0; i<n; ++i) {
        for(int j=i+1; j<n; ++j) {
            ll newans = calc(i, j);

            if(i > 0)
                newans += pre[i-1];
            if(j < n-1)
                newans += pre[n-1] - pre[j];
            ans = max(newans, ans);
        }
    }
    cout<<ans<<"\n";
}

int main() {
    // cin>>T;
    // for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    // }
}
