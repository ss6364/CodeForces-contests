//  https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/roy-and-symmetric-logos-1/
//   Roy and Symmetric Logos
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,t,i=0,j=0;
    char a[10000][10000];
    cin>>t;
    while(t--){
        cin>>n;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }int k=0,s=0;
       // symmetry along Y - AXIS
        for(i=1;i<=n;i++){
            for(j=1;j<=n/2;j++){
                if(a[i][j]==a[i][n+1-j]){
                	//cout<<a[i][j]<<"   "<<a[i][n+1-j]<<"  ";
                	k=1;
                }
                else{
                    k=0; break;
                }
                
               // cout<<a[i][j]<<" ";
            }
            if(k==0){
                	break;
                }
            //cout<<"\n";
        }
         
          // along X-axis
          for(i=1;i<=n;i++){
            for(j=1;j<=n/2;j++){
                if(a[j][i]==a[n+1-j][i]){
                	s=1;
                	//cout<<a[j][i]<<"   "<<a[n-j+1][i]<<"  ";
                }
                else{
                    s=0;break;
                }
                
               // cout<<a[i][j]<<" ";
            }
            if(s==0){
                	break;
                }
            //cout<<"\n";
        }
        if(k==0  || s==0){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
    return 0 ;
}
