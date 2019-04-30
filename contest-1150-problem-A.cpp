// https://codeforces.com/contest/1150/problem/A
//   Stock Arbitraging



#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n=0,m=0,r;
	cin>>n>>m>>r;
	int a[n],b[m],i,k=0;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<m;i++){
		cin>>b[i];
	}
	sort(b,b+m);

	if(a[0]>=b[m-1]){
		cout<<r<<endl;
		return 0;
	}
	int s = r/a[0];
	int d = r%a[0];

	int ans = (s*b[m-1])+d ;
	//cout<<b[m]<<"::";
	cout<<ans;


	return 0;
}
