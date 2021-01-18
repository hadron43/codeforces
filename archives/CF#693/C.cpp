/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
typedef long long ll;

vector<int> arr, ans;
// map<int, int> m;
int T, N, in;

void solve() {
    arr.clear();
    ans.clear();
    for(int i=0; i<N; ++i) {
        cin>>in;
        arr.push_back(in);
        ans.push_back(0);
    }    
    for(int i=N-1; i>=0; --i) {
        if(i+arr[i] < N)
            ans[i] += ans[i+arr[i]];
        ans[i] += arr[i];
    }

    int m = ans[0];
    for(int i=1; i<N; ++i)
        m = max(m, ans[i]);

    cout<<m<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N;
        solve();
    }
}