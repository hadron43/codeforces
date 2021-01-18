#include <iostream>
using namespace std;

int main() {
    int T, N;
    cin>>T;

    for(int t=0; t<T; ++t) {
        cin>>N;

        for(int i=2; i<=N; ++i)
            cout<<i<<" ";
        cout<<1<<endl;
    }
}