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
int T;
string N;

void solve() {
    int count = 0;
    for(int i=1; i<N.size(); ++i) {
        if(N[i] == N[i-1] || (i>=2 && N[i]==N[i-2])) {
            count++;
            N[i] = 'A';
        }
    }
    cout<<count<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N;
        solve();
    }
}