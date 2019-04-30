#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,k,a[1000000],i=0,s=0;
	cin>>n>>k;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	s=a[k-1];
	if(a[k]==s){
		cout<<"-1";
	}
	else{
		s=s+1;
		cout<<s;
	}
	return 0;
}
