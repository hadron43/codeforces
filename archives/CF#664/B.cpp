#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, Sx, Sy;
    cin>>n>>m>>Sx>>Sy;

    cout<<Sx<<" "<<Sy<<endl;
    bool mat[101][101];

    for(int i=0; i<=100; ++i)
        for(int j=0; j<=100; ++j)
            mat[i][j] = false;

    mat[Sx][Sy] = true;

    if(Sx != 1){
        Sx = 1;
        cout<<Sx<<" "<<Sy<<endl;
        mat[Sx][Sy] = true;
    }

    if(Sy != 1){
        Sy = 1;
        cout<<Sx<<" "<<Sy<<endl;
        mat[Sx][Sy] = true;
    }

    for(int i=1; i<=n; ++i){
        if(i%2==1)
            for(int j=1; j<=m; ++j){
                if(mat[i][j])
                    continue;

                cout<<i<<" "<<j<<endl;
            }
        else 
            for(int j=m; j>=1; --j){
                if(mat[i][j])
                    continue;

                cout<<i<<" "<<j<<endl;
            }
    }
}