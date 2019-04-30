//     http://codeforces.com/contest/1153/problem/0


#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,t,ind=0;
	cin>>n>>t;
	int i,s[n+1],a[n+1],d[n+1];
	int mn=INT_MAX,k=0 ;
	for(i=1;i<=n;i++){
		cin>>s[i]>>d[i];
		 k = (t-s[i])/d[i];
		 if(k<0)k=0;
		if((k*d[i]+s[i] < t))k++;
		a[i] = s[i]+(k*d[i]);
		if(mn>a[i]){
			mn = a[i];
			ind = i;
		}
	}
	cout<<ind<<endl;
	return 0;
}
