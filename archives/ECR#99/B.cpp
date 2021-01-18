// @hadron43 -- 'Expert' soon
// Good luck to you! ;P

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

double find_roots (double a, double b, double c) {
    double x1, x2;
    double discriminant = b*b - 4*a*c;
    if (discriminant >= 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);

        if(x1 > x2)
            return x1;

        return x2;
    }
    return -1;
}

ll find_Sn(double a, double d, double n) {
    return (ll)((n/2)*(2*a + (n-1)*d));
}

int main() {
    ll T, x, ans;
    cin>>T;

    for(int t=0; t<T; ++t) {
        cin>>x;

        ll basic = (ll)ceil(find_roots(1, 1, -2*x));
        ll an = find_Sn(1, 1, basic);
        
        if(an-x == 1) 
            basic++;
        
        cout<<basic<<endl;
    }
}

/*
Rough

Sn = n/2(2a+(n-1)d)
2Sn = n(2a + (n-1)d)
0 = n2d + 2an - nd - 2Sn

*/