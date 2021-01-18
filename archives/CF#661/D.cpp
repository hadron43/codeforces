#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int t=0; t<T; ++t){
        int n;
        cin>>n;
        string str;
        cin>>str;

        vector<int> zero, one;

        int count=0;
        int * res = new int[n];

        for(int i=0; i<n; ++i){
            if(str[i]=='0'){
                if(one.size() > 0){
                    int temp = one[one.size() - 1];
                    one.pop_back();
                    *(res+i) = temp;                
                    zero.push_back(temp);
                }
                else {
                    count ++;
                    zero.push_back(count);
                    *(res+i) = count;  
                }
            }
            else{
                if(zero.size() > 0){
                    int temp = zero[zero.size() - 1];
                    zero.pop_back();
                    *(res+i) = temp;                
                    one.push_back(temp);
                }
                else {
                    count ++;
                    one.push_back(count);
                    *(res+i) = count;
                }
            }
        }

        cout<<count<<endl;
        for(int i=0; i<n; ++i){
            cout<<*res<<" ";
            res ++;
        }
        cout<<endl;
    }
}