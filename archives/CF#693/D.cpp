/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
typedef long long ll;

vector<int> odd, even;
// map<int, int> m;
int T, N, in;

void solve() {
    ll alice = 0, bob = 0;
    odd.clear();
    even.clear();

    for(int i=0; i<N; ++i) {
        cin>>in;
        if(in%2)
            odd.push_back(in);
        else
            even.push_back(in);
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    reverse(odd.begin(), odd.end());
    reverse(even.begin(), even.end());

    int o_i = 0, e_i = 0;

    while(e_i < even.size() || o_i < odd.size()) {
        // Alice Plays
        if(e_i < even.size()) {
            if(o_i < odd.size() && even[e_i] < odd[o_i]) {
                o_i++;
            }
            else {
                alice += even[e_i++];
            }
        }
        else {
            o_i++;
        }

        // Bob Plays
        if(o_i < odd.size()) {
            if(e_i < even.size() && odd[o_i] < even[e_i]) {
                e_i++;
            }
            else {
                bob += odd[o_i++];
            }
        }
        else {
            e_i++;
        }
    }

    if(alice > bob) 
        cout<<"Alice"<<endl;
    else if(bob > alice)
        cout<<"Bob"<<endl;
    else
        cout<<"Tie"<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N;
        solve();
    }
}