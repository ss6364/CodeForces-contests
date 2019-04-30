//	http://codeforces.com/contest/463/problem/B
//	 Caisa and Pylons
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,h[200000],i=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>h[i];
	}
	int s=0,c=0;
	h[0]=0;
	for(i=0;i<n;i++){
		 c=c+h[i]-h[i+1];
		if(c<0){
			s=s+(0-c);
			c=0;
		}
	}
	cout<<s ;
	return 0 ;
}
