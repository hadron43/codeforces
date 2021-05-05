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
    auto it = upper_bound(arr.begin(), arr.end(), n);
    int ind = it - arr.begin();
    cout<<ind<<"\n";
}

int main() {
    cin>>T;

    for(int i=1; i<10; ++i) {
        for(int j=1; j<10; ++j) {
            int num = 0;
            for(int k = 0; k<i; ++k) {
                num *= 10;
                num += j;
            }
            arr.push_back(num);
        }
    }

    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
