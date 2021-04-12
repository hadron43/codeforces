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
// map<ll, ll> m;
ll T, n, k;
string s[27];

void solve() {
    s[0] = "";
    for(int i=1; i<=26; ++i) {
        s[i] = s[i-1];
        if(i > 2)
            s[i] += 'a';
        char c = 'a' + (i-1);
        s[i] += c;
        char temp = c-1;
        while(temp > 'a') {
            s[i] += c;
            s[i] += temp;
            temp--;
        }
        s[i] += c;
    }

    string str = s[k];
    int times = n / (str.length());
    int mod = n % (str.length());
    for(int i=0; i<times; ++i)
        cout<<str;
    for(int i=0; i<mod; ++i)
        cout<<str[i];
    cout<<" \n";
}

int main() {
    // cin>>T;
    // for(int t=0; t<T; ++t) {
        cin>>n>>k;
        solve();
    // }
}
