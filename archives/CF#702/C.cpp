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
    bool ans = false;
    for(int i=0; i<arr.size(); ++i) {
        ll diff = n - arr[i];
        if(binary_search(arr.begin(), arr.end(), diff)) {
            ans = true;
            break;
        }
    }
    cout<<(ans?"YES":"NO")<<endl;
}

int main() {
    cin>>T;
    arr.push_back(1);
    for(ll i=2; arr.back() < 1e12; i++) {
        arr.push_back(i*i*i);
    }
    
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
