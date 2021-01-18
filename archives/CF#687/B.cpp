#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin>>T;

    for(int t=0; t<T; ++t) {
        int house[100000], n, k, ans[101], res; 
        cin>>n>>k;

        for(int i=0; i<n; ++i) {
            cin>>house[i];
        }
        
        memset(ans, 0, 101*sizeof(int));
        for(int chosen = 1; chosen<=100; ++chosen) {
            for(int i=0; i<n; ++i) {
                if(house[i] != chosen) {
                    i += k-1;
                    ans[chosen]++;
                }
            }
        }

        res = INT32_MAX;
        for(int i=1; i<=100; ++i)
            if(ans[i] < res)
                res = ans[i];
        
        cout<<res<<endl;
    }
}