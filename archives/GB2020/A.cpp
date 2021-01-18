/*
 * @hadron43, Expert soon
 * Good luck!
 */
#include <bits/stdc++.h>
using namespace std;

#define modulo 1000000007
typedef long long ll;

vector<int> v;
// map<int, int> m;
set<double> s;
int T, N;

void solve() {
    int temp;
    v.clear();
    s.clear();
    for(int i=0; i<N; ++i) {
        cin>>temp;
        v.push_back(temp);
    }

    vector<double> areas;
    for(int i=0; i<N-1; ++i) {
        areas.push_back(0.5 * abs(v[i] - v[i+1]));
    }

    for(int i=0; i<areas.size(); ++i) {
        double area = areas[i];
        s.insert(area);
        for(int j=i+1; j<areas.size(); ++j) {
            area += areas[j];
            s.insert(area);
        }
    }

    cout<<s.size()<<endl;
}

int main() {
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>N;
        solve();
    }
}