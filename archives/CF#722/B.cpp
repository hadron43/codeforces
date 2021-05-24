/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<ll> a;
// map<ll, ll> m;
ll T, n, in;

int solve() {
    a.resize(n);
    for(ll &x: a) cin>>x;

    sort(a.begin(), a.end());

    auto it = upper_bound(a.begin(), a.end(), 0);
    int negatives = it - a.begin();
    if(it == a.end())
        return negatives;

    int count = 1;
    int last_included_index = 0;
    ll mini = a[it-a.begin()];

    for(int i=1; i<n; ++i) {
        if(a[i] > mini)
            break;
        if(abs(a[i] - a[last_included_index]) >= mini) {
            count ++;
            last_included_index = i;
        }
    }
    return max(negatives, count);
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        cout<<solve()<<"\n";
    }
}
