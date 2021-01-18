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
ll T, N;

void solve() {
    int temp = 9;
    for(int i=0; i<N; ++i) {
        cout<<temp;

        if(i < 1)
            temp--;
        else
            temp++;

        if(temp > 9)
            temp = 0;
        
        if(temp < 0)
            temp = 9;
    }
    cout<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N;
        solve();
    }
}
