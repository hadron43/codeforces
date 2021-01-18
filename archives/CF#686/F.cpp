#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 200000
#define DIM(N) ((int)ceil(log2(N)))

int dim;

int T, N, a[MAX_SIZE], prefix[MAX_SIZE], 
    suffix[MAX_SIZE], middle[18][MAX_SIZE];

void calc_middle() {
    for(int i=0; i<dim; ++i) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int size = (int)pow(2, i);
        for(int j=1; j<=size; ++j)
            pq.push(a[j]);

        for(int j=size+1; j<N-1; ++j) {
            middle[i+1][j-size] = pq.top();
            pq.pop();
            pq.push(a[j]);
        }
    }
}

int binary_srch(int i, int j) {
    int size = j-i, size_log = (int)log2(size),
     size_a = (int)pow(2, size_log);
    
    if(size_a == size)
        return middle[size_log][i];
    else if(size > size_a)
        return min(binary_srch(i, i+size_a), binary_srch(i+size_a, j));
    
}

int main() {
    cin>>T;

    for(int t=0; t<T; ++t) {
        cin>>N;
        dim = DIM(N);
        for(int i=0; i<N; ++i)
            cin>>a[i];

        memset(middle, 0, 18*MAX_SIZE);

        prefix[0] = a[0];
        suffix[N-1] = a[N-1];

        for(int i=1; i<N-1; ++i) {
            prefix[i] = min(prefix[i-1], a[i]);
            suffix[N-i] = min(suffix[N-i], a[N-i-1]);
        }

        calc_middle();
        int ans = -1;
        for(int i=0, j=N-1; i<j; i++, j--) {
            while(i<j-1 && prefix[i]!=suffix[j]) {
                if(prefix[i] > suffix[j])
                    j--;
                else
                    i++;
            }

            if(!(i<j-1))
                break;

            if(prefix[i] == binary_srch(i+1, j-1)) {
                cout<<"YES"<<endl
                    <<i+1<<" "<<j-i<<" "<<N-j+1<<endl;
                ans = 1;
            }
        }

        if(ans == -1)
            cout<<"NO"<<endl;
    }
}