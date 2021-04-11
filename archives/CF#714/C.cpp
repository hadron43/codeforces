/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007LL
#define maxsize 200000
typedef long long ll;

int pre[maxsize+1];
int nine[maxsize+1];
int T, n, in, k;

int add_mod(ll a, ll b) {
    return (int)(((a%modulo) + (b%modulo)) % modulo);
}

void solve() {
    int ans = 0;
    while(n) {
        ll r = n%10;
        n /= 10;

        if(k >= 10-r)
            ans = add_mod(ans, pre[k-10+r]);
        else
            ans = (ans+1) % modulo;
    }
    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0; i<=maxsize; ++i)
        nine[i] = 0;
    pre[0] = 2;
    nine[0] = true;
    for(int i=1; i<=maxsize; ++i) {
        pre[i] = pre[i-1];
        if(i-9 >= 0 && nine[i-9]) {
            pre[i] = add_mod(pre[i], nine[i-9]);
            nine[i] = add_mod(nine[i], nine[i-9]);
        }
        if(i-10 >= 0 && nine[i-10]) {
            pre[i] = add_mod(pre[i], nine[i-10]);
            nine[i] = add_mod(nine[i], nine[i-10]);
        }
    }
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>k;
        solve();
    }
}
