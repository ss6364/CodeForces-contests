/// first DP Implementation
//   http://codeforces.com/contest/489/problem/B


#include<bits/stdc++.h>
using namespace std ;
#define m 3010

int main(){
	int n=0;
	cin>>n;
	int a[m],b[m],dp[m][m],i,j;
	
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	int k=0;
	cin>>k;
	
	for(i=1;i<=k;i++){
		cin>>b[i] ;
	}
	sort(a+1,a+n+1);
	sort(b+1,b+k+1);
	dp[0][0]=0 ;
	for(i=1;i<=n;i++){
		for(j=1;j<=k;j++){
			dp[i][j] = dp[i-1][j-1];
			if( abs(a[i]-b[j])<=1 ){
				dp[i][j]++;
				
			}
			dp[i][j]=max(dp[i][j] , max(dp[i-1][j],dp[i][j-1])) ;
			//cout<<dp[i][j]<<" ";
		}
		//cout<<endl;
	}
	cout<<dp[n][k];
	
	
	return 0;
}