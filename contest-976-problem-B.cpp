//   http://codeforces.com/problemset/problem/976/B
//   Lara Croft and the New Game
#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	if(k>(m*n)){
		k=k%(m*n);
	}
	if(k<=n){
		cout<<k<<"1";
		return 0 ;
	}
	int row=1,col=1;
	k=k-n;
	if(k<m){
		row=n , col=k+1;
		cout<<row <<" "<<col;
		return 0;
	}
	n=n-(k/(m-1));
	k=k%(m-1);
	if(n%2==0 ){
		row=n,col=k+1;
	}
	else{
		row=n;col=m-k+1;
	}
	cout<<row<<" "<<col;
	
	return 0;
}
