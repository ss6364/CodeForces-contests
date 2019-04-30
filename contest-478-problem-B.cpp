//   http://codeforces.com/contest/478/problem/B

#include<bits/stdc++.h>
using namespace  std ;

int main(){
	long long n=0,m=0;
	cin>>n>>m;
	long long mx=0 , mn = 0 ;
	
	if(m==n){
		mx = 0 ;
	}
	else {
		long long diff = n-m ;
		mx = (diff*(diff+1))/2 ;
	}
	
	if(m==n){
		mn=0;
	}
	else{
		long long diff = (n/m) ;
		long long mod = n%m ;
		long long k;
		/// for modded numbers
		//cout<<diff<<":::"<<mod<<endl;;
		k = diff ;
		k = (k*(k+1))/2 ;
		k*=mod ;
		long long s = (m-mod) ;
		mn+=k ;
		//cout<<mn<<" :: "<<s<<endl;
		diff-=1;
		k = (diff*(diff+1))/2 ;
		k*=s ;
		mn += k ;
	}
	cout<<mn<<" "<<mx;
	return 0; 
}