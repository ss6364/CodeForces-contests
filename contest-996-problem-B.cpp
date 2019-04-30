		//http://codeforces.com/contest/996/problem/B
		//world cup
#include<bits/stdc++.h>
using namespace std ;

int main(){
	int n,i=0,flag=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	while(1){
		if(a[flag]==0){
			cout<<flag+1<<endl;
			return 0 ;
		}
		for(i=0;i<n;i++){
			a[i]=a[i]-1;
		}
		flag++;
		if(flag==n){
			flag=0;
		}
	}
	return 0;
}
