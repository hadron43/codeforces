#include <iostream>
#include <string.h>
using namespace std;

#define LEN 200001

int main() {
    int T, N, a[LEN], MIN, last[LEN], count[LEN];
    cin>>T;

    for(int t=0; t<T; ++t) {
        cin>>N;
        memset(last, 0, LEN*sizeof(int));

        for(int i=1; i<=N; ++i){
            cin>>a[i];
            count[i] = INT32_MAX;
        }
        last[a[1]] = 1;
        count[a[1]] = 0;

        for(int i=2; i<=N; ++i) {
            if(last[a[i]] != i-1) {
                if(count[a[i]] == INT32_MAX)
                    count[a[i]] = 0;
                count[a[i]] ++;
            }
            last[a[i]] = i;
        }

        for(int i=1; i<=N; ++i) {
            if(i != a[N] && count[i] != INT32_MAX) {
                count[i] ++;
            }
        }

        MIN = INT32_MAX;

        // for(int i=0; i<=N; ++i)
        //     cout<<last[i]<<" ";
        // cout<<endl;

        // for(int i=0; i<=N; ++i)
        //     cout<<count[i]<<" ";
        // cout<<endl;

        for(int i=1; i<=N; ++i)
            if(count[i] < MIN)
                MIN = count[i];

        cout<<MIN<<endl;
    }
}