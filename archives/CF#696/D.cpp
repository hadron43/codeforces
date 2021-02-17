/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<ll> arr, pre, post;
// map<ll, ll> m;
ll T, n, in;

void solve() {
    arr.resize(n);
    for(ll &x : arr)
        cin>>x;

    pre = arr;
    post = arr;

    for(int i=1; i<n; ++i) {
        if(pre[i-1] == -1 || pre[i] < pre[i-1])
            pre[i] = -1;
        else
            pre[i] -= pre[i-1];
    }

    for(int i=n-2; i>=0; --i) {
        if(post[i+1] == -1 || post[i] < post[i+1])
            post[i] = -1;
        else
            post[i] -= post[i+1];
    }

    bool ans = (post[0] == 0);
    for(int i=0; i<n-1 && !ans; ++i) {
        ll pre1 = 0, post1 = 0;
        if(i-1 >= 0)
            pre1 = pre[i-1];
        if(i+2 < n)
            post1 = post[i+2];

        if(pre1==-1 || post1==-1)
            continue;

        ll a = arr[i+1];
        ll b = arr[i];
        ll m = min(b, post1);
        b -= m; post1 -= m;

        m = min(a, b);
        a -= m; b-= m;

        m = min(pre1, a);
        pre1 -= m;  a-= m;

        if(!pre1 && !a && !b && !post1)
            ans = true;
    }

    cout<<(ans?"Yes":"No")<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}


/*

2100    1900   1600  3000    1600
pre:
-1      -1      -1    -1       -1
post:
400    1700    200    1400    1600

*/