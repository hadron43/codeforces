/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

vector<int> arr;
// map<ll, ll> m;
ll T, N, in;

bool canPartition(vector<int>& nums) {
    int n = nums.size();
    int target = 0;
    for(int x : nums) target += x;
    
    if(target % 2)   return false;
    target /= 2;
    
    int mat[n+1][target+1];
    
    for(int i=0; i<=n; ++i) mat[i][0] = 0;
    for(int i=0; i<=target; ++i)    mat[0][i] = 0;
    
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=target; ++j) {
            mat[i][j] = mat[i-1][j];
            if(j-nums[i-1] >= 0)
                mat[i][j] = max(mat[i][j], mat[i-1][j-nums[i-1]]+nums[i-1]);
        }
    }
    return (mat[n][target] == target);
}

void solve() {
    arr.resize(N);
    for(int &x : arr)    cin>>x;

    int ans = 0, ind = -1;
    bool partition = canPartition(arr);
    if(partition) {
        for(int i=0; i<N; ++i) {
            vector<int> tmp;
            for(int j=0; j<N; ++j)
                if(j!=i) tmp.push_back(arr[j]);
            partition = canPartition(tmp);
            if(!partition) {
                ans = 1;
                ind = i+1;
                break;
            }
        }
    }
    cout<<ans<<"\n";
    if(ind != -1) {
        cout<<ind<<"\n";
    }
}

int main() {
    // cin>>T;
    // for(int t=0; t<T; ++t) {
        cin>>N;
        solve();
    // }
}
