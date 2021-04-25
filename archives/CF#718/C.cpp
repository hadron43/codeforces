/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

int mat[500][500];
ll T, n, in;

void solve() {
    memset(mat, 0, 500*500*sizeof(int));
    for(int i=0; i<n; ++i)
        cin>>mat[i][i];
    bool ans = true;
    for(int i=0; i<n && ans; ++i) {
        int cnt = mat[i][i]-1;
        int x = i, y = i;
        while(cnt > 0) {
            if(x > 0 && mat[y][x-1] == 0) {
                // LEFT
                x--;
            }
            else if(y < n-1 && mat[y+1][x] == 0) {
                // DOWN
                y++;
            }
            else {
                ans = false;
                break;
            }

            mat[y][x] = mat[i][i];
            cnt--;
        }
    }
    if(!ans) {
        cout<<-1<<"\n";
    }
    else {
        for(int i=0; i<n; ++i) {
            for(int j=0; j<=i; ++j) {
                cout<<mat[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}

int main() {
    // cin>>T;
    // for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    // }
}
