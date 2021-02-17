/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<ll> arr;
// map<ll, ll> m;
ll T, n, in;

ll count(ll a, ll b) {
    if(a > b)
        return count(b, a);
    
    if(b <= 2*a)
        return 0;

    return 1 + count(2*a, b);
}

void solve() {
    arr.resize(n);
    for(ll &temp: arr)
        cin>>temp;

    ll ctr = 0;
    for(int i=0; i<n-1; ++i)
        ctr += count(arr[i], arr[i+1]);
    
    cout<<ctr<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
