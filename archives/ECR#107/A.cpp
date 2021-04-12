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
ll T, n, in;

void solve() {
    int upvotes = 0, downvotes = 0;
    for(int i=0; i<n; ++i) {
        cin>>in;
        if(in == 2)
            downvotes++;
        else 
            upvotes++;
    }
    cout<<upvotes<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
