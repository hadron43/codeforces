/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
typedef long long ll;

// vector<int> arr;
// map<int, int> m;
ll T, W, H, N;

void solve() {
    ll ans = 1;
    while(H % 2 == 0) {
        ans *= 2;
        H /= 2;
    }

    while(W % 2 == 0) {
        ans *= 2;
        W /= 2;
    }

    if(ans >= N) {
        cout<<"YES"<<endl;
    }
    else 
        cout<<"NO"<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>W>>H>>N;
        solve();
    }
}