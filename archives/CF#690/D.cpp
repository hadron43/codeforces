#include <bits/stdc++.h>
using namespace std;

int T, n, arr[3000], sum, ops;

bool check(int &i, int &total) {
    if(i >= n)
        return true;

    int temp = 0;
    ops --;
    while(temp < total && i < n) {
        temp += arr[i];
        ops++;
        i++;
    }

    if(temp != total)
        return false;
    return check(i, total);
}

int main() {
    cin>>T;

    for(int t=0; t<T; ++t) {
        cin>>n;
        sum = 0;
        for(int i=0; i<n; ++i) {
            cin>>arr[i];
            sum += arr[i];
        }

        int ans = INT32_MAX;
        for(int i=1; i<=n; ++i) {
            int j = 0, total = sum/i;
            ops = 0;
            if(sum % i == 0 && check(j, total)) {
                ans = min(ans, ops);
            }
        }

        cout<<ans<<endl;
    }
}