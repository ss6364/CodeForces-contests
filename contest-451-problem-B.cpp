//  http://codeforces.com/contest/451/problem/B
//           Sort the Array

#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,arr[10000],copy_arr[100000],init=0,i=0,end=0;
	//input size
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
		copy_arr[i]=arr[i];
	}
	for(i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			init=i;break;
		}
	}
	for(i=n-1;i>0;i--){
		if(arr[i]<arr[i-1]){
			end=i;break;
		}
	}
	if(init==0 && end ==0){
		cout<<"yes"<<"\n";
		cout<<init+1<<" "<<end+1;
		return 0 ;
	}

	for(i=init;i<end-1;i++){
		if(arr[i]<arr[i+1]){
			cout<<"no";
			return 0 ;
		}
	}
	if(arr[init]>arr[end+1] && end!=n-1){
		cout<<"no";
		return 0 ;
	}
	if(arr[end]<arr[init-1] && init!=0){
		cout<<"no";
		return 0 ;
	}
	if(init==0 && end ==n-1){
		cout<<"yes"<<"\n";
		cout<<init+1<<" "<<end+1;
		return 0 ;
	}
	else{
	cout<<"yes"<<"\n";
	cout<<init+1<<" "<<end+1;
	}
	return 0 ;
}
