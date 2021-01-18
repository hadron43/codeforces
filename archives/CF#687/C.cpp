#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T, n, p, k;
    ll blue[100000], ans;
    string str;
    int x, y;
    cin>>T;

    for(int t=0; t<T; ++t) {
        cin>>n>>p>>k
            >>str
            >>x>>y;

        for(int i=n-1; i>=0; --i) {
            blue[i] = (((i+k)>n-1)?0:blue[i+k]) + 
                ((str[i]=='0')?1:0);
        }

        ans = blue[p-1]*x;
        for(int i=p; i<n; ++i) {
            int removal = i-p+1;
            ans = min(ans, blue[i]*x + removal*y);
        }

        cout<<ans<<endl;
    }
}

/* WRONG ANSWER

1
3 2 2
101
6 1

Expected: 1
Output: 6

*/