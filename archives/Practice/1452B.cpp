#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long long T, N, temp, MAX, SUM;

    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N;

        MAX = 0;
        SUM = 0;

        for(int i=0; i<N; ++i){
            cin>>temp;
            if(temp > MAX)
                MAX = temp;
            SUM += temp;
        }

        temp = max(MAX, (long long)ceil((double)SUM / (N-1)));
        temp = temp*(N-1) - SUM;
        cout<<temp<<endl;
    }
}