/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
typedef long long ll;

// vector<int> arr;
// map<int, int> m;
int T, n, m;
vector<int> a, b;

void solve() {
    int m1 = 0, m2 = 0;
    for(int i=0; i<a.size(); ++i)
        m1 = max(m1, a[i]);
    for(int i=0; i<b.size(); ++i)
        m2 = max(m2, b[i]);
    cout<<m1+m2<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        a.clear(); b.clear();
        cin>>n;
        int temp;
        int sum = 0;
        for(int i=0; i<n; ++i){
            cin>>temp;
            sum += temp;
            a.push_back(sum);
        }
        cin>>m;
        sum = 0;
        for(int i=0; i<m; ++i){
            cin>>temp;
            sum += temp;
            b.push_back(sum);
        }
        solve();
    }
}