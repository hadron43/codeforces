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
ll T, n, q, k, in;

struct seg_tree {
    int n;
    vector<ll> tree; 
    
    // function to build the tree 
    void build(vector<ll> &arr)  
    {  
        n = arr.size();
        tree.resize(2*n);
        // insert leaf nodes in tree 
        for (int i=0; i<n; i++)     
            tree[n+i] = arr[i]; 
        
        // build the tree by calculating parents 
        for (int i = n - 1; i > 0; --i)      
            tree[i] = tree[i<<1] + tree[i<<1 | 1];     
    }
    
    // function to get sum on interval [l, r) 
    ll query(int l, int r)  
    {  
        ll res = 0; 
        
        // loop to find the sum in the range 
        for (l += n, r += n; l < r; l >>= 1, r >>= 1) 
        { 
            if (l&1)  
                res += tree[l++]; 
        
            if (r&1)  
                res += tree[--r]; 
        } 
        
        return res; 
    } 
}st;


void solve() {
    int l, r;
    cin>>l>>r;
    l--; r--;
    ll ans = st.query(l, r+1);
    if(l!=0) {
        ans += a[l-1];
    }
    if(r!=n-1) {
        ans += k-a[r+1]+1;
    }
    cout<<ans<<endl;
}

int main() {
    cin>>n>>q>>k;
    a.resize(n);
    for(ll &temp : a)
        cin>>temp;

    vector<ll> forseg(n);
    if(n>1) {
        forseg[0] = a[1]-2;
        forseg[n-1] = k-a[n-2]-1;
    }
    else
        forseg[0] = k-1;

    for(int i=1; i<n-1; ++i) {
        forseg[i] = a[i+1]-a[i-1]-2;
    }

    st.build(forseg);

    for(int t=0; t<q; ++t) {
        solve();
    }
}
