/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

struct node {
    ll value;
    int index;
};

bool compare(node &a, node &b) {
    return a.value < b.value;
}

ll pre[maxsize];
node a[maxsize];
bool winners[maxsize];
// map<ll, ll> m;
ll T, n;

void solve() {
    for(int i=0; i<n; ++i) {
        cin>>a[i].value;
        a[i].index = i;
    }

    sort(&a[0], &a[n], compare);
    // cout<<"first: "<<a[0].value<<endl;

    pre[0] = a[0].value;
    for(int i=1; i<n; ++i) {
        pre[i] = pre[i-1] + a[i].value;
    }

    for(int i=0; i<n; ++i)
        winners[i] = false;

    ll reqd = INT64_MIN;
    int count = 0;
    for(int i=n-1; i>=0; --i) {
        if(pre[i] >= reqd) {
            winners[a[i].index] = true;
            count++;
            reqd = a[i].value;
        }
        else
            break;
    }
    
    cout<<count<<'\n';
    for(int i=0; i<n; ++i) {
        if(winners[i])
            cout<<i+1<<' ';
    }
    cout<<'\n';
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
