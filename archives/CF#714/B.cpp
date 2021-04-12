/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007LL
#define maxsize 200000
typedef long long ll;

vector<ll> arr;
// map<ll, ll> m;
ll T, n, in;

ll mulmod(ll a, ll b) {
    return (a%modulo)*(b%modulo) % modulo;
}

ll factorial(ll inp) {
    if(inp <= 0)
        return 1;
    if(inp <=2 )
        return inp;
    return mulmod(inp, factorial(inp-1));
}

void solve() {
    arr.resize(n);
    for(ll &temp : arr)
        cin>>temp;
    sort(arr.begin(), arr.end());
    bool ans = true;
    if(arr[0] != arr[1])
        ans = false;
    for(int i=2; ans && i<n; ++i) {
        if((arr[0] & arr[i]) != arr[0])
            ans = false;
    }
    int count = 0;
    for(int i=0; i<n; ++i)
        if(arr[i]==arr[0])
            count++;
    if(ans && count>=2) {
        cout<<mulmod(mulmod(count, count-1), factorial(n-2))<<"\n";
    }
    else
        cout<<0<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
