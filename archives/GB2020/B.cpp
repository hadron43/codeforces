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
// map<int, int> m;
set<int> s;
int T, N;

void solve() {
    s.clear();
    int inp;

    for(int i=0; i<N; ++i) {
        cin>>inp;

        if(s.size() > 0 && s.find(inp) != s.end()) {
            s.insert(inp+1);
        }
        else {
            s.insert(inp);
        }
    }

    cout<<s.size()<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N;
        solve();
    }
}