/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

// vector<ll> arr;
bool done_color[50];
int T, n, q, in;

struct node {
    int color, index;
}arr[50];

void solve() {
    for(int i=0; i<50; ++i) {
        arr[i] = {0, 0};
        done_color[i] = false;
    }
    int ind = 0;
    for(int i=0; i<n; ++i) {
        cin>>in;
        in--;
        if(!done_color[in]) {
            arr[ind] = {in, i+1};
            done_color[in] = true;
            ind++;
        }
    }

    for(int i=0; i<q; ++i) {
        cin>>in;
        in--;
        int index;
        for(int i=0; i<50; ++i) {
            if(arr[i].color == in) {
                index = i;
                break;
            }
        }
        node t_node = arr[index];
        cout<<t_node.index<<" ";
        for(int i=index-1; i>=0; i--) {
            arr[i+1] = arr[i];
            arr[i+1].index ++;
        }
        arr[0] = t_node;
        arr[0].index = 1;
    }
    cout<<"\n";
}

int main() {
    // cin>>T;
    // for(int t=0; t<T; ++t) {
        cin>>n>>q;
        solve();
    // }
}
