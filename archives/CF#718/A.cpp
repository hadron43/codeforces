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
    int cnt = 0;
    bool ans = true;
    while(n >= 2050) {
        ll temp = 2050;
        while(temp <= n)
            temp *= 10;
        temp /= 10;
        n -= temp;
        cnt ++;
    }
    if(n != 0)
        cout<<-1<<"\n";
    else
        cout<<cnt<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
