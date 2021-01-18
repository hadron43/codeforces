#include <iostream>
using namespace std;

int main() {
    int t, n, x, a[50], b[50];
    cin>>t;

    for(int _t=0; _t<t; ++_t) {
        cin>>n>>x;
        for(int i=0; i<n; ++i)
            cin>>a[i];
        for(int i=0; i<n; ++i)
            cin>>b[i];

        bool ans = true;
        for(int i=0; i<n; ++i)
            if(a[i] + b[n-1-i] > x) {
                ans = false;
                break;
            }

        cout<<(ans?"Yes":"No")<<endl;
    }
}