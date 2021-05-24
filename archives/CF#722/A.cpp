/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<ll> arr;
// map<ll, ll> m;
ll T, n, in;

void solve() {
    arr.resize(n);
    for(ll &x : arr)   cin>>x;
    sort(arr.begin(), arr.end());
    int count = 1;
    for(int i=1; i<n; ++i)
        if(arr[i] == arr[0])
            count++;
        else
            break;

    cout<<arr.size()-count<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
