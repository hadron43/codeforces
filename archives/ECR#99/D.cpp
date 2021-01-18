// @hadron43 -- 'Expert' soon
// Good luck to you! ;P

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a[500];

bool ordered(int size) {
    for(int i=1; i<size; ++i)
        if(a[i] < a[i-1])
            return false;

    return true;
}

void solve() {
    int n, x;
    cin>>n>>x;

    for(int i=0; i<n; ++i)
        cin>>a[i];

    int count = 0;
    while(!ordered(n)) {
        int ind = -1;
        for(int i=0; i<n; ++i)
            if(a[i]>x){
                ind = i;
                break;
            }
        if(ind == -1){
            cout<<-1<<endl;
            return;
        }

        count++;
        int temp = a[ind];
        a[ind] = x;
        x = temp;
    }
    cout<<count<<endl;
}

int main() {
    int T, ans;
    cin>>T;

    for(int t=0; t<T; ++t) {
        solve();
    }
}