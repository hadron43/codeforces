/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

int T, a, b, k;

int noOfPrimeFactor(int n) {
    int cnt = 0;
    while (n%2 == 0){
        n =  n >> 1;
        cnt++;
    }
    for (int i = 3; i <= sqrt(n); i = i+2){
        while (n%i == 0){
            n = n/i;
            cnt++;
        }
    }
    if (n > 2)
        cnt++;
    return cnt;
}

int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a); }

void solve() {
    int g = gcd(a, b);

    int cnt1 = noOfPrimeFactor(a / g) + noOfPrimeFactor(b / g);
    int cnt2 = cnt1 + noOfPrimeFactor(g) * 2;
    int mini = (g < a) + (g < b);

    if(k >= mini && k <= cnt2 && !(a == b && k == 1))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>a>>b>>k;
        solve();
    }
}
