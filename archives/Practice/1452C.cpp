#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, ans;
    string str;
    stack<int> para, bracket;
    cin>>T;
    for(int t=0; t<T; ++t) {
        cin>>str;
        ans = 0;
        
        for(char c: str) {
            if(c == '(')
                para.push(c);
            else if(c == ')') {
                if(!para.empty() && para.top() == '(') {
                    ans ++;
                    para.pop();
                }
            }
            else if(c == '[')
                bracket.push(c);
            else if(c == ']') {
                if(!bracket.empty() && bracket.top() == '[') {
                    ans ++;
                    bracket.pop();
                }
            }
        }
        
        while(!para.empty())
            para.pop();
            
        while(!bracket.empty())
            bracket.pop();
        
        cout<<ans<<endl;
    }
}