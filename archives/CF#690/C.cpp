#include <bits/stdc++.h>
using namespace std;

vector<int> v;

void solve(int x, int i) {
    if(x <= 0)
        return;
    if(x <= i) {
        v.push_back(x);
        return;
    }
    if(i < 1) {
        v.clear();
        return;
    }
    v.push_back(i);
    solve(x-i, i-1);
}

int main() {
    int t, x;
    cin>>t;
    for(int T=0; T<t; ++T) {
        cin>>x;
        v.clear();
        solve(x, 9);

        if(v.size() == 0) {
            cout<<-1<<endl;
        }
        else {
            for(int i=v.size() -1; i>=0; i--)
                cout<<v[i];

            cout<<endl;
        }
    }
}