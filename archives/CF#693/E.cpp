/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

class entry {
    public:
    int index;
    int w, h;

    entry(int index, int a, int b) {
        this->index = index;
        if(a > b) {
            h = a;
            w = b;
        }
        else {
            h = b;
            w = a;
        }
    }

    bool operator < (entry &e) {
        if(h < e.h)
            return true;
        return false;
    }

    bool operator == (entry &e) {
        if(h == e.h)
            return true;
        return false;
    }

    bool operator %(entry &e) {
        if(w < e.w)
            return true;
        return false;
    }
};

vector<entry> arr;
vector<int> ans, pre, m;
int T, N, in1, in2;

void solve() {
    arr.clear();
    pre.clear();
    m.clear();
    ans.clear();

    for(int i=0; i<N; ++i) {
        cin>>in1>>in2;
        arr.push_back(entry(i+1, in1, in2));
    }

    sort(arr.begin(), arr.end());
    pre.resize(N);
    pre[0] = -1;
    for(int i=1; i<N; ++i) {
        if(arr[i] == arr[i-1])
            pre[i] = pre[i-1];
        else
            pre[i] = i-1;
    }

    m.resize(N);
    m[0] = 0;
    for(int i=1; i<N; ++i) {
        if(arr[m[i-1]] % arr[i]) {
            m[i] = m[i-1];
        }
        else {
            m[i] = i;
        }
    }

    ans.resize(N);
    for(int i=0; i<N; ++i) {
        ans[i] = -1;
        if(pre[i] < 0) {
            continue;
        }
        int pos = m[pre[i]];
        if(arr[pos] % arr[i]) {
            ans[i] = arr[pos].index;
        }
    }

    vector<int> res(N);
    for(int i=0; i<N; ++i) {
        res[arr[i].index-1] = ans[i];
    }

    for(int x : res)
        cout<<x<<" ";
    cout<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N;
        solve();
    }
}