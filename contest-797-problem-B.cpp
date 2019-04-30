//      http://codeforces.com/problemset/problem/797/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=0;
	cin>>n;
	int a[n],i;
	int sum=0,min=1000001,k;
	//k=min;
	for(i=0;i<n;++i){
		cin>>a[i];
		k=abs(a[i]);
		//cout<<min<<":::"<<k<<endl;
		if(k%2!=0 && k<min){
			min=k;
		}
		if(a[i]>0){
			sum+=a[i];
		}
	}
	if(sum==0){
		cout<<-min<<endl;
	}
	else if(sum%2!=0){
		cout<<sum<<endl;
	}
	else {
		//cout<<sum<<" "<<min<<"  ::";
		int g=sum-min;
		cout<<g<<endl;;
	}
	return 0;
}
