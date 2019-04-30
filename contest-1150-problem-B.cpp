
//  https://codeforces.com/contest/1150/problem/B
//   tiling challenge




#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll x=0,y=0,s=0,n=0,i=0;

int main(){
    IOS;
    cin>>n;;
    char a[n][n];;
    for(i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		cin>>a[i][j];
    	}
    }

    int j=0;
    for(i=1;i<(n-1);i++){
    	for(j=1;j<(n-1);j++){
    		if(a[i][j]=='.'){
    			//cout<<a[j][j]<<" ";
    			if( a[i][j-1]=='.' && a[i][j+1]=='.' && a[i-1][j]=='.' && a[i+1][j]=='.' ){
    				a[i][j-1] = '#' ;
    				a[i][j+1] = '#' ;
    				a[i+1][j] = '#' ;
    				a[i-1][j] = '#' ;
    				a[i][j]='#';
    			}
    		}
    	}
    }

    for(i=0;i<n;i++){
    	for( j=0;j<n;j++){
    		if(a[i][j]=='.'){
    			cout<<"NO";
    			return 0;
    		}
    	}
    }

    cout<<"YES";
    return 0;
}
