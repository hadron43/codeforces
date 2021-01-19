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
ll T, d, in;

vector<ll> primes;

void solve() {
    ll first = *lower_bound(primes.begin(), primes.end(), 1+d);
    ll second = *lower_bound(primes.begin(), primes.end(), first + d);

    cout<<first*second<<endl;
}

bool isPrime(ll a) {
    for(ll x : primes) {
        if(a % x == 0)
            return false;
    }
    return true;
}

int main() {
    cin>>T;

    primes.push_back(2);
    ll a = 2;
    while(primes.size() < 10000) {
        ++a;
        if(isPrime(a))
            primes.push_back(a);
    }
    // cout<<primes[primes.size()-1]<<endl;

    for(int t=0; t<T; ++t) {
        cin>>d;
        solve();
    }
}
