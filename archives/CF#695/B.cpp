/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define maxsize 300000
typedef long long ll;

vector<int> arr;
// map<int, int> m;
ll T, N, in;

int check(int i) {
    if(i <= 0 || i >= arr.size()-1)
        return 0;

    if((arr[i]>arr[i-1] && arr[i]>arr[i+1]) ||
        (arr[i]<arr[i-1] && arr[i]<arr[i+1]))
        return 1;
    
    return 0;
}

ll increase(int i) {
    ll temp = arr[i];
    ll original = check(i) + check(i-1) + check(i+1);
    ll new_ = 0;

    arr[i] = INT32_MAX;
    new_ += check(i-1) + check(i) + check(i+1);

    arr[i] = temp;
    return min(0LL, new_ - original);
}

ll decrease(int i) {
    ll temp = arr[i];
    ll original = check(i) + check(i-1) + check(i+1);
    ll new_ = 0;

    arr[i] = 0;
    new_ += check(i-1) + check(i) + check(i+1);

    arr[i] = temp;
    return min(0LL, new_ - original);
}

ll left_equal(int i) {
    if(i <= 0)
        return 0;

    ll temp = arr[i];
    ll original = check(i) + check(i-1) + check(i+1);
    ll new_ = 0;

    arr[i] = arr[i-1];
    new_ += check(i-1) + check(i) + check(i+1);

    arr[i] = temp;
    return min(0LL, new_ - original);
}

ll right_equal(int i) {
    if(i >= arr.size()-1)
        return 0;

    ll temp = arr[i];
    ll original = check(i) + check(i-1) + check(i+1);
    ll new_ = 0;

    arr[i] = arr[i+1];
    new_ += check(i-1) + check(i) + check(i+1);

    arr[i] = temp;
    return min(0LL, new_ - original);
}

void solve() {
    ll m_ex = 0, sum = 0;
    for(int i=0; i<N; ++i) {
        sum += check(i);

        m_ex = min(m_ex, increase(i));
        m_ex = min(m_ex, decrease(i));
        m_ex = min(m_ex, left_equal(i));
        m_ex = min(m_ex, right_equal(i));
    }
    sum += m_ex;
    cout<<sum<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N;
        arr.clear();
        for(int i=0; i<N; ++i) {
            cin>>in;
            arr.push_back(in);
        }
        solve();
    }
}
