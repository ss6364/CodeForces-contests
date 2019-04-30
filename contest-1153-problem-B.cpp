//    http://codeforces.com/contest/1153/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,h;
    cin>>n>>m>>h;
    int M[m+1],N[n+1],H[n][m];
    int i,j,k,mn=0,s=0;
    for(i=0;i<m;i++){
        cin>>M[i];
    }
    for(i=0;i<n;i++){
        cin>>N[i];
    }
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>H[i][j] ;
            }
    }

    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                    H[i][j] = (H[i][j]*(min(N[i],M[j])));
                cout<<H[i][j]<<"  ";
            }
            cout<<endl;
    }

    return 0;
}
