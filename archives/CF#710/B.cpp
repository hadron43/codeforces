/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<ll> arr;
ll T, n, k, ctr;
string s;

void solve() {
    arr.clear();
    for(int i=0; i<s.size(); ++i) {
        if(s[i] == '*')
            arr.push_back(i);
    }
 
    ctr = 0;
    for(int i=0, j=arr.size()-1; i<=j;) {
        if(i == j) {
            ctr ++;
            break;
        }
        int i_= i;
        ll up = arr[i] + k;
        while(i+1 < arr.size() && arr[i+1] <= up)
            i++;
        
        up = arr[j] - k;
        int j_ = j;
        while(j-1 >= 0 && arr[j-1] >= up)
            j--;
        
        ctr += 2;
        if(i < j_ && i>j)
            ctr++;
    }
    cout<<ctr<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>n>>k;
        cin>>s;
        solve();
    }
}
