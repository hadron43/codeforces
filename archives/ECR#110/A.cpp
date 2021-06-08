/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1e7 + 9
#define maxsize 2e5
typedef long long ll;

// vector<ll> arr;
// map<ll, ll> m;
ll T, n, in;

void solve() {
    vector<int> v(4);
    for(int i=0; i<4; ++i)
        cin>>v[i];
    int w1 = max(v[0], v[1]);
    int w2 = max(v[2], v[3]);
    sort(v.begin(), v.end());
    
    if(w1 > w2) {
        int temp = w1;
        w1 = w2;
        w2 = temp;
    }

    cout<<((w1 == v[2] && w2 == v[3]) ? "YES" : "NO")<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>T;
    for(int t=0; t<T; ++t) {
        // cin>>n;
        solve();
    }
}
