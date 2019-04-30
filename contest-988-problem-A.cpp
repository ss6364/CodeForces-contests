#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,k,a[11000],i=0,s=0;
	cin>>n>>k;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int j=1;int b[11000];
	b[0]=a[0];
	
	for(i=1;i<n;i++){
		if(a[i]==a[i-1]){
			i++;
		}
		else{
			b[j]=a[i];
			j++;
		}
	}
	int len = j;
	if(len<k){
		cout<<"NO";
		return 0 ;
	}
	else {
		cout<<"YES"<<"\n";
		//cout<<"1"<<" ";
		j=1;
		b[0]=a[0];
		cout<<"1"<<" ";
		for(i=0;i<len;i++){
			cout<<b[i]<<"  :: ";
		}
		cout<<"\n";
		for(i=0;i<n;i++){
			for(int s=0;s<j;s++){
						if( b[j]==a[i] && b[s]!=a[i]){
							
							cout<<i+1<<" ";
							j++;
						}
			}		
			//cout<<b[i]<<" ";
		}
	}
	
	/*
	for(i=0;i<j;i++){
		cout<<b[i]<<" ";
	}
	*/
	
	return 0 ;
}
