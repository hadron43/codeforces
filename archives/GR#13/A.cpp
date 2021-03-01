/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<int> arr;
// map<ll, ll> m;
ll T, n, q, in, t;

void solve() {
    arr.resize(n);
    int zero = 0, one = 0;
    for(int i=0; i<n; ++i) {
        cin>>in;
        arr[i] = in;
        (in == 1) ? one++ : zero++;
    }

    for(int i=0; i<q; ++i) {
        cin>>t;
        cin>>in;

        if(t == 1) {
            if(arr[in-1] == 0) {
                zero--;
                one++;
                arr[in-1] = 1;
            }
            else {
                zero++;
                one--;
                arr[in-1] = 0;
            }
        }
        else {
            cout<<( (in>one) ? 0 : 1 ) << "\n";
        }
    }
}

int main() {
    // cin>>T;
    // for(int t=0; t<T; ++t) {
        cin>>n>>q;
        solve();
    // }
}
