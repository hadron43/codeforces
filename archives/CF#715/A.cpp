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

void solve() {
    arr.resize(n);
    for(ll &temp : arr)
        cin>>temp;
    for(ll &temp : arr)
        if(temp % 2)
            cout<<temp<<" ";
    for(ll &temp : arr)
        if(!(temp % 2))
            cout<<temp<<" ";
    cout<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
