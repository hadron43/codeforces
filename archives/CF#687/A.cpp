#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll calc(ll N, ll M) {
    return M*N*(N+M-2)/2;
}

int main() {
    int T;
    cin>>T;

    for(int t=0; t<T; ++t) {
        ll n, m, r, c;
        cin>>n>>m>>r>>c;

        ll ans = 0;

        ans = max(ans, m-c+r-1);
        ans = max(ans, m-c+n-r);
        ans = max(ans, c-1+n-r);
        ans = max(ans, c-1+r-1);
        cout<<ans<<endl;
    }
}