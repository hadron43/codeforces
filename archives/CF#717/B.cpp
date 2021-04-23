/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 2001
typedef long long ll;

vector<ll> arr;
ll T, n, in;

void solve() {
    arr.resize(n);
    ll x = 0;
    for(int i=0; i<n; ++i) {
        cin>>arr[i];
        x = x ^ arr[i];
    }
    
    bool ans = false;
    ll x_, count;
    if(x == 0) {
        ans = true;
    }
    else{
        x_ = 0; count = 0;
        for(int i=0; i<n; ++i) {
            x_ = x_ ^ arr[i];
            if(x_ == x) {
                x_ = 0;
                count++;
            }
        }
        if(count > 1)
            ans = true;
    }
    cout<<(ans ? "YES" : "NO")<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
