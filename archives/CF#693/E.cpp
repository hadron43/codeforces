/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 200000
typedef long long ll;

struct entry {
    int index;
    int w, h;
};

bool compare(const entry &a, const entry &b) {
    if((a.w<b.w && a.h<b.h) || (a.w<b.h && a.h<b.w))
        return true;
    return false;
}

vector<entry> arr;
int ans[maxsize];
int T, N, in1, in2;

int binarySearch(int low, int high, entry &en) {
    if(low > high)
        return -1;
    
    int mid = (low + high) / 2;

    if(compare(arr[mid], en)) {
        return arr[mid].index;
    }
    else {
        return binarySearch(low, mid-1, en);
    }
}

void solve() {
    arr.clear();
    entry en;

    for(int i=0; i<N; ++i) {
        en.index = i+1;
        cin>>in1>>in2;
        en.w = in1;
        en.h = in2;

        arr.push_back(en);
    }

    sort(arr.begin(), arr.end(), compare);
    memset(ans, 0, N*sizeof(int));

    for(entry i : arr) {
        // cout<<i.index<<": "<<i.h<<", "<<i.w<<endl;
        int result = binarySearch(0, arr.size()-1, i);
        ans[i.index-1] = result;
    }

    for(int i=0; i<N; ++i) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N;
        solve();
    }
}