/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

int arr[maxsize];
// map<int, int> m;
ll T, N, K;

void solve() {
    int ctr = 1;
    int i=0;
    for(; i<K-(N-K)-1; ++i) {
        arr[i] = ctr++;
    }

    i = K-1;
    while(ctr<=K) {
        arr[i] = ctr++;
        i--;
    }

    for(int i=0; i<K; ++i)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N>>K;
        solve();
    }
}
