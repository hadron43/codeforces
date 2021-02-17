/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

// map<int, int> m;
vector<int> arr;
ll T, N, X, in;

void solve() {
    ll sum = 0;
    arr.clear();
    for(int i=0; i<N; ++i) {
        cin>>in;
        arr.push_back(in);
    }

    int mul = 1, index = -1;
    bool flag = true;

    while(flag) {
        for(int i=0; i<N; ++i) {
            sum += arr[i] * mul;
            if(arr[i] % X && flag) {
                flag = false;
                index = i;
            }
            arr[i] /= X;
        }
        mul *= X;

        bool finish = true;
        for(int x : arr) {
            if(x) {
                finish = false;
                break;
            }
        }

        if(finish) {
            index = 0;
            break;
        }
    }

    
    for(int i=0; i<index; ++i) {
        sum += arr[i] * mul;
    }

    cout<<sum<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N>>X;
        solve();
    }
}
