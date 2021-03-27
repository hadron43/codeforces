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
ll U, R, D, L;

void solve() {
    cin>>U>>R>>D>>L;
    bool ans = false;

    for(int i=0; i<16; ++i) {
        vector<int> v;
        int temp = i;
        while(temp!=0) {
            v.push_back(temp%2);
            temp/=2;
        }
        while(v.size() < 4)
            v.push_back(0);
        
        if(v[0] + v[1] > U || (U - v[0] - v[1] > n-2))
            continue;
        if(v[1] + v[2] > R || (R - v[1] - v[2] > n-2))
            continue;
        if(v[2] + v[3] > D || (D - v[2] - v[3] > n-2))
            continue;
        if(v[3] + v[0] > L || (L - v[3] - v[0] > n-2))
            continue;
        ans = true;
        break;
    }

    cout<<((ans)?"YES":"NO")<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
