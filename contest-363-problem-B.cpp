//    http://codeforces.com/contest/363/problem/B
//     Fence

#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,k,h[300000];
	cin>>n>>k;
	for(int i=0; i<n;i++){
		cin>>h[i];
	}
	int min=0;
	int index=1,sum=0;
	if(n>1){
		
		for(int i=0;i<k;i++){
			min=min+h[i];
		}
		
		sum=min;
		int j;
		for(int i=0 ;i<n-k;i++){
		//	cout<<sum<<" ";
				sum=sum+h[i+k]-h[i];
			
		//	cout<<sum<<" ";
			if(min>sum){
				min=sum;
				index=i+2;
				
			}
		}
		
	}
	
	  cout << index ;
	  
	return 0 ;
}
