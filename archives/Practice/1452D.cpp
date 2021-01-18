#include <iostream>
using namespace std;

typedef long long ll;

ll mod = 998244353;

ll addmod(ll a, ll b) {
    return (a+b)%mod;
}

ll mulmod(ll a, ll b) {
    return (a * b)%mod;
}

ll binpow(ll a, ll b) {
    ll ans = 1;

    while(b > 0) {
        if (b%2) ans = mulmod(ans, a);
        a = mulmod(a, a);
        b /= 2;
    }

    return ans;
}

int main() {
    ll a = 0, b = 1, c, n;
    cin>>n;
    for(int i=0; i<n-1; ++i) {
        c = addmod(a, b);
        a = b;
        b = c;
    }

    ll ans = b;
    cout<<mulmod(ans, binpow(binpow(2,n), mod-2))<<endl;
}