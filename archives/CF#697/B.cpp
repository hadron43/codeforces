/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

// map<ll, ll> m;
ll T, q, d, in;
vector<vector<bool>> mat(9);

void solve() {
    cin >> q >> d;

    for(int i=0; i<q; ++i) {
        bool ans = true;
        cin>>in;
        if(in < 100) {
            ans = mat[d-1][in];
        }
        cout<<(ans?"Yes":"No")<<endl;
    }
}

int main() {
    for(int i=0; i<9; ++i) {
        mat[i].resize(100);
        for(int j=0; j<100; ++j)    mat[i][j] = false;
        for(int j=1; j<100; ++j) {
            int d0 = j%10;
            int d1 = j/10;
            if((d0==i+1) || (d1==i+1)) {
                mat[i][j] = true;
            }
            if(mat[i][j] && j+i+1 < 100) {
                mat[i][j+i+1] = true;
            }
        }
    }

    cin>>T;
    for(int t=0; t<T; ++t) {
        solve();
    }
}