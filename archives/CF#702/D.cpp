/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<ll> depth;
// map<ll, ll> m;
ll T, n, in;

struct node {
    int value;
    int depth;

    node *left;
    node *right;
};

void build(vector<int> &a, int l, int r, node *root) {
    if(l >= r)
        return;
    
    int index = l;
    for(int i=l; i<r; ++i) {
        if(a[i] > a[index]) {
            index = i;
        }
    }

    root->value = a[index];
    root->left = NULL;
    root->right = NULL;

    depth[root->value] = root->depth;

    if(l < index) {
        root->left = new node();
        root->left->depth = root->depth + 1;
        build(a, l, index, root->left);
    }
    if(index+1<r) {
        root->right = new node();
        root->right->depth = root->depth + 1;
        build(a, index+1, r, root->right);
    }
}

void solve() {
    vector<int> a(n);
    for(int &temp : a)
        cin>>temp;
    
    node root;
    root.depth = 0;
    depth.resize(n+1);
    build(a, 0, n, &root);
    
    for(int &temp : a) {
        cout<<depth[temp]<<" ";
    }
    cout<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n;
        solve();
    }
}
