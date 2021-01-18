#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, buf;
    cin>>T;

    for(int t=0; t<T; ++t) {
        string str;
        cin>>buf>>str;

        string ans = "NO\n";
        if(!str.substr(0, 4).compare("2020") 
        || !str.substr(str.size()-4, str.size()).compare("2020")
        || (str[0] == '2' && !str.substr(str.size()-3, str.size()).compare("020"))
        || (str[0] == '2' && str[1] == '0' && !str.substr(str.size()-2, str.size()).compare("20"))
        || (str[str.size()-1] == '0' && !str.substr(0, 3).compare("202"))
        ) {
            ans = "YES\n";
        }

        cout<<ans;
    }
}