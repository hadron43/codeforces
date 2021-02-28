/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<ll> arr, m_ind(maxsize);
// map<ll, ll> m;
ll T, n, in;

void solve() {
    arr.resize(n);
    for(ll &temp : arr)
        cin>>temp;
    
    m_ind[0] = 0;
    for(int i=1; i<n; ++i)
        m_ind[i] = (arr[i] > arr[m_ind[i-1]]) ? i : m_ind[i-1];

    ll ind = m_ind[n-1], p_ind = n;
    while(ind != 0) {
        for(int i=ind; i<p_ind; ++i)
            cout<<arr[i]<<" ";
        p_ind = ind;
        ind = m_ind[ind-1];
    }

    for(int i=0; i<p_ind; ++i)
        cout<<arr[i]<<" ";
    cout<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
