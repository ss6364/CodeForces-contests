//   http://codeforces.com/contest/680/problem/B
//         Bear and Finding Criminals
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,loc,a[10000],i=0;
	cin>>n>>loc;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	int criminals=0;
	if(a[loc]==1){
		criminals++;
	}
	if(loc<=(n/2)){
		k=loc*2;
		for(i=1;i<loc;i++){
			if(a[i]==1 && a[k-i]==1){
				criminals+=2;
			}
		}
		for(i=k;i<=n;i++){
			if(a[i]==1){
				criminals++;
			}
		}
	}
	else{
		k=(loc*2)-n;//cout<<k;
		int s=n;
		for(i=1;i<k;i++){
			if(a[i]==1){
				criminals++;
			}
		}
		for(i=k;i<loc;i++){
			if(a[i]==1 && a[s]==1){
				criminals+=2;
				//cout<<i<<" "<<s<<"\n";
			}s--;
			
		}
	} 
	cout<<criminals;
	
	return 0;
}
