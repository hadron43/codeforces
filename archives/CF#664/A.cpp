#include <bits/stdc++.h>
using namespace std;

string myans(int r, int g, int b, int w){
    int odds, evens;
    odds = 0, evens = 0;

    (r%2) ? odds++ : evens++;
    (g%2) ? odds++ : evens++;
    (b%2) ? odds++ : evens++;
    (w%2) ? odds++ : evens++;

    string ans = "No";

    if(((long)r+g+b+w) % 2 == 1){
        if(odds == 1 || (r>0 && g>0 && b>0 && odds==3))
            ans = "Yes";
    }
    else {
        if(evens == 4 || odds == 4)
            ans = "Yes";
    }   

    return ans;    
}

bool check(int r, int g, int b, int w){
    if(r%2 + g%2 + b%2 + w%2 > 1)
        return false;
    return true;
}

string editorial(int r, int g, int b, int w){
    if(check(r, g, b, w))
        return "Yes";
    else if (r>0 && g>0 && b>0 && check(r-1, g-1, b-1, w+1))
        return "Yes";
    return "No";
}

int main(){
    int r, g, b, w;
    string m = "", e = "";
    long long i = 0;
    int max;
    cout<<"Enter max value: ";
    cin>>max;
    srand((unsigned) time(0));
    while(m==e && i<=1000000){
        cout<<"Test "<<i++<<" passed!\n";
        r = rand()%max;
        g = rand()%max;
        b = rand()%max;
        w = rand()%max;

        m = myans(r,g,b,w);
        e = editorial(r,g,b,w);
    }

    if(m==e){
        cout<<"All tests passed!\n";
    }
    else
        cout<<"Test "<<i<<" failed!\n"
            <<"r: "<<r<<"\tg: "<<g<<"\tb: "<<b<<"\tw: "<<w<<endl
            <<"My ans: "<<m<<"\tEditorial: "<<e<<endl;
}