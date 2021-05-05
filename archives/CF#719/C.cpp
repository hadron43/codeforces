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
    if(n == 2) {
        cout<<"-1\n";
        return;
    }

    int mat[n][n];
    int temp = 1;
        
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            if((i+j) % 2 == 0)
                mat[i][j] = temp++;
        }
    }

    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            if((i+j) % 2 != 0)
                mat[i][j] = temp++;
        }
    }

    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j)
            cout<<mat[i][j]<<" ";
        cout<<"\n";
    }
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
