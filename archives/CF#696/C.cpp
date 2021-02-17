/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef int ll;

// vector<ll> arr;
// map<ll, ll> m;
multiset<ll> arr, cpy;
ll T, n, in;

void solve() {
    arr.clear();
    for(int i=0; i<2*n; ++i) {
        cin>>in;
        arr.insert(in);
    }

    ll m = *(--arr.end());
    string ans = "";
    for(ll temp : arr) {
        ll x = m + temp;
        ans = to_string(x) + "\n";
        cpy = arr;

        while(cpy.size() > 0) {
            auto po = cpy.end();
            po--;
            ll maxi = *po;
            cpy.erase(po);
            auto p = cpy.find(x-maxi);

            if(p == cpy.end()) {
                cpy.insert(maxi);
                break;
            }

            ans += to_string(maxi) + " " + to_string(*p) + "\n";
            x = maxi;
            cpy.erase(p);
        }

        if(cpy.empty()) {
            cout<<"YES\n"<<ans;
            return;
        }
    }

    cout<<"NO"<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
