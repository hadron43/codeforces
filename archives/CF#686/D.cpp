#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

map<ll, ll> factorize(ll N) {
    map<ll, ll> m;

    for(ll i=2; i*i <= N; ++i) {
        while(N % i == 0) {
            N /= i;
            m[i] += 1;
        }
    }

    if(N != 1)
        m[N] ++;

    return m;
}

int main() {
    ll T, N, K;
    cin>>T;

    for(int t=0; t<T; ++t) {
        cin>>N;
        map<ll, ll> m = factorize(N);

        K = 0;
        for(pair<ll, ll> p : m) {
            if(p.second > K)
                K = p.second;
        }

        ll *arr = new ll[K];

        for(int i=0; i<K; ++i)
            arr[i] = 1;

        for(pair<ll, ll> p : m) {
            arr[K - p.second] *= p.first;
        }
        
        N = 1;
        cout<<K<<endl;
        for(int i=0; i<K; ++i) {
            N *= arr[i];
            cout<<N<<" ";
        }
        cout<<endl;

        delete arr;
    }
}

/* Comments
2 2 2 4 4 5 5 5 5


*/