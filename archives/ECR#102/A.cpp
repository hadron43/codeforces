/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<int> arr;
// map<int, int> m;
ll T, n, d, in;

void solve() {
    arr.clear();
    for(int i=0; i<n; ++i) {
        cin>>in;
        arr.push_back(in);
    }

    sort(arr.begin(), arr.end());
    if(arr[n-1] <= d || arr[0] + arr[1] <= d) {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>d;
        solve();
    }
}
