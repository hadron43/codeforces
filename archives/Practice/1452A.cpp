#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, x, y, ans;
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>x>>y;
        ans = 2*min(x, y);
        ans += max(2*((x+y) - ans) - 1, 0);
        cout<<ans<<endl;
    }
}