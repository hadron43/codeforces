/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define MAX_SIZE 200000
typedef long long ll;

ll arr[MAX_SIZE];
ll fact[MAX_SIZE], invFact[MAX_SIZE];

ll mulmod(ll a, ll b) {
    return (a*b) % mod;
}

ll addmod(ll a, ll b) {
    return (a+b) % mod;
}

ll binpow(ll a, ll b) {
    ll ans = 1;
    if(b == 0)
        return ans;
    while(b) {
        if(b & 1)
            ans = mulmod(ans, a);
        a = mulmod(a, a);
        b >>= 1;
    }
    return ans;
}

ll modinv(ll a) {
    return binpow(a, mod-2);
}

ll nCr(int n, int r) {
    if(r > n)
        return 0;
    return mulmod(fact[n], mulmod(invFact[r], invFact[n-r]));
}

void solve(int N, int M, int K) {
    int inp;
    memset(arr, 0, N*sizeof(int));
    for(int i=0; i<N; ++i) {
        cin>>inp;
        arr[inp-1] ++;
    }
    
    ll ans = 0, sum = 0;
    for(int i=0; i<K; ++i) {
        sum += arr[i];
    }
    if(arr[0] > 0)
        sum--;
    for(int i=1; i<N; ++i) {
        if(i+K < N) {
            sum += arr[i+K] - 1;
        }
        if(arr[i-1] != 0) {
            sum -= arr[i-1] - 1;
        }

        if(arr[i] != 0)
            ans += nCr(sum, M-1);
    }

    cout<<ans<<endl;
}

int main() {
    int T, N, M, K;
    cin>>T;

    fact[0] = 1;
    invFact[0] = 1;

    for(int i=1; i<MAX_SIZE; ++i) {
        fact[i] = mulmod(i, fact[i-1]);
        invFact[i] = modinv(fact[i]);
    }

    for(int t=0; t<T; ++t) {
        cin>>N>>M>>K;
        solve(N, M, K);
    }
}

/**
 * 1 2 3 4
 * a^(p-1) = 1 (mod p)
*/