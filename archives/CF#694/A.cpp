/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

// vector<int> arr;
ll sum;
// map<int, int> m;
ll T, N, X, in;

void solve() {
    ll mini = 0, maxi = 0;
    sum = 0;

    for(int i=0; i<N; ++i) {
        cin>>in;
        sum += in;

        maxi += (in/X) + ((in%X)?1:0);
    }

    cout<<(sum/X) + ((sum %X)?1:0)<<" "<<maxi<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N>>X;
        solve();
    }
}
