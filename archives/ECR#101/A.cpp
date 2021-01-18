/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define modulo 1000000007
typedef long long ll;

// vector<int> arr;
// map<int, int> m;
int T, q;
string N;

void solve() {
    if(N.length() % 2 == 0 && N[0] != ')' && N[N.length() -1] != '(') {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N;
        solve();
    }
}