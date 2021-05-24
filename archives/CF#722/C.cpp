/*
    * @hadron43, Expert soon
    * Good luck!
    */
#include <bits/stdc++.h>
using namespace std;
    
typedef long long ll;
ll T, n, in;
    
class node {
    public:
    ll l, r, l_best, r_best;
    vector<node*> adj;
    
    node(ll l, ll r) {
        this->l = l;
        this->r = r;
        l_best = r_best = -1;
    }
};
    
void best(node *root, node *parent) {
    if(root == nullptr)
        return;
    
    ll l_best = 0, r_best = 0;
    for(node * n : root->adj) {   
        if(n == parent)
            continue;
    
        if(n ->l_best == -1)
            best(n, root);
        
        l_best += max(
            abs(root->l - n->l) + n->l_best,
            abs(root->l - n->r) + n->r_best
        );
    
        r_best += max(
            abs(root->r - n->l) + n->l_best,
            abs(root->r - n->r) + n->r_best
        );
    }
    
    root->l_best = l_best;
    root->r_best = r_best;
}
    
void solve() {
    ll l, r;
    vector<node*> tree(n);
    
    for(int i=0; i<n; ++i) {
        cin>>l>>r;
        tree[i] = new node(l, r);
    }
    
    for(int i=0; i<n-1; ++i) {
        cin>>l>>r;
        tree[l-1]->adj.push_back(tree[r-1]);
        tree[r-1]->adj.push_back(tree[l-1]);
    }
    
    best(tree[0], nullptr);
    cout<<max(tree[0]->l_best, tree[0]->r_best)<<"\n";
    
    for(int i=0; i<n; ++i)
        delete tree[i];
}
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}