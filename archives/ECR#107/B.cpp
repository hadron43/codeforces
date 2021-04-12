/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

ll T, a, b, c;

void solve() {
    bool rev = false;
    if(a > b) {
        ll temp = a;
        a = b; 
        b = temp;
        rev = true;
    }

    ll gcd = 1, first = 1, second = 1;
    for(int i=0; i<c-1; ++i)
        gcd *= 10;
    for(int i=0; i<a-1; ++i)
        first *= 10;
    for(int i=0; i<b-1; ++i)
        second *= 10;
    second += gcd;
    if(!rev)
        cout<<first<<" "<<second<<"\n";
    else
        cout<<second<<" "<<first<<"\n";
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>a>>b>>c;
        solve();
    }
}
