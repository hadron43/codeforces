/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

// vector<int> arr;
// map<int, int> m;
ll T;
string s1, s2;

ll lcm(int a,int b) {
    int m,n;
 
    m=a;
    n=b;
 
    while(m!=n)
    {
        if(m < n)
        {
        m=m+a;
        }
        else
        {
            n=n+b;
            }
    }
    return m;
}

void solve() {
    string t1, t2;
    t1 = s1;
    t2 = s2;
    int l = lcm(t1.length(), t2.length());

    while(t1.length() < l) {
        t1 += s1;
    }

    while(t2.length() < l) {
        t2 += s2;
    }

    if(t1.compare(t2) == 0) {
        cout<<t1<<endl;
    }
    else
        cout<<-1<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>s1>>s2;
        solve();
    }
}
