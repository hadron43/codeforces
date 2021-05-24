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
    for(ll &x : arr)    cin>>x;

    bool sorted = true;
    for(int i=0; i<n; ++i)
        if(arr[i] != i+1) {
            sorted = false;
            break;
        }
    
    if(sorted)
        cout<<0<<"\n";
    else if(arr[0] == 1 || arr[n-1] == n)
        cout<<1<<"\n";
    else if(arr[0] == n && arr[n-1] == 1)
        cout<<3<<"\n";
    else
        cout<<2<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
