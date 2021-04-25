/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<deque<ll>> arr;
ll ans[100][100];
ll T, n, m, in;

void solve() {
    arr.clear();
    vector<ll> v(m);
    for(int i=0; i<n; ++i) {
        for(ll &temp : v)
            cin>>temp;
        sort(v.begin(), v.end());
        deque<ll> dq;
        for(ll temp : v)
            dq.push_back(temp);
        arr.push_back(dq);
    }
    for(int i=0; i<m; ++i) {
        ll m_ind = 0;
        for(int j=0; j<n; ++j) {
            if(arr[j].front() < arr[m_ind].front())
                m_ind = j;
        }
        for(int j=0; j<n; ++j) {
            if(j != m_ind) {
                ans[i][j] = arr[j].back();
                arr[j].pop_back();
            }
            else {
                ans[i][j] = arr[j].front();
                arr[j].pop_front();
            }
        }
    }

    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            cout<<ans[j][i]<<" ";
        }
        cout<<"\n";
    }
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>m;
        solve();
    }
}
