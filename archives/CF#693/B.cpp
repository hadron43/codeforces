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
int T, N, in;

void solve() {
    int one = 0, two = 0;
    for(int i=0; i<N; ++i) {
        cin>>in;
        if(in == 2)
            two ++;
        else
            one ++;
    }

    bool ans = true;

    if((two*2 + one)%2 == 1) {
        ans = false;
    }
    else if(two % 2 && (one % 2 || one == 0)) {
        ans = false;
    }

    if(!ans)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N;
        solve();
    }
}