#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, n, arr[300];
    cin>>T;

    for(int t=0; t<T; ++t) {
        cin>>n;
        for(int i=0; i<n; ++i)
            cin>>arr[i];

        for(int i=0; i<n/2; ++i) {
            if(i == n-i-1)
                cout<<arr[i]<<" ";
            else
                cout<<arr[i]<<" "<<arr[n-i-1]<<" ";
        }

        if(n & 1)
            cout<<arr[n/2];
        cout<<endl;
    }
}