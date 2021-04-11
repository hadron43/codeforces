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
ll T, n, in, k;

void swap(ll &a, ll &b) {
    ll temp = a;
    a = b;
    b = temp;
}

void solve() {
    arr.resize(n);
    for(int i=0; i<n; ++i)
        arr[i] = i+1;
    ll peaks = 0;
    for(int i=2; i<n; i+=2) {
        if(peaks == k)
            break;
        swap(arr[i], arr[i-1]);
        peaks++;
    }

    if(peaks < k)
        cout<<-1<<endl;
    else {
        for(int i=0; i<n; ++i)
            cout<<arr[i]<<" ";
        cout<<endl;
    }

}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>k;
        solve();
    }
}
