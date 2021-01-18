#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int T, N, temp, index, a[200000], count[200001];
    cin>>T;

    for(int t=0; t<T; ++t) {
        cin>>N;
        memset(count, 0, 200001*sizeof(int));

        for(int i=0; i<N; ++i) {
            cin>>a[i];
            count[a[i]] += 1;
        }

        temp = -1;
        for(int i=1; i<=N; ++i)
            if(count[i] == 1){
                temp = i;
                break;
            }

        if(temp == -1)
            index = -2;
        else {
            for(int i=0; i<N; ++i) {
                if(a[i] == temp) {
                    index = i;
                    break;
                }
            }
        }

        cout<<index+1<<endl;
    }
}