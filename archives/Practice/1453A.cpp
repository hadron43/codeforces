#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0; i<t; ++i) {
        int n, m, arr[100], temp, ans = 0;
        cin>>n>>m;
        memset(arr, 0, 100*sizeof(int));
        for(int i=0; i<n; ++i) {
            cin>>temp;
            arr[temp-1] = 1;
        }
        for(int i=0; i<m; ++i) {
            cin>>temp;
            if(arr[temp-1] == 1)
                ans++;
        }

        cout<<ans<<endl;
    }
}